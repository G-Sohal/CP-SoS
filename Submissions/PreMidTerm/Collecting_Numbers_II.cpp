#include<iostream>
#include<vector>
#include<cmath>
#define ll long long
using namespace std;

int main() {
    ll n, m; 
    cin>>n>>m;

    ll ind[n];
    ll num[n];

    for(ll i = 0; i<n; i++) {
        ll y; cin>>y;
        ind[y-1]=i;
        num[i] = y-1;
    }
    ll count = 1;
    for(ll i = 1; i<n; i++) {
        if(ind[i]<ind[i-1]) count++;
    }
    
    for(ll i=0; i<m; i++) {
        ll a, b;
        cin>>a>>b;
        a--; b--;
        ll p = num[a];
        ll q = num[b]; // actual - 1
        ll a_prev, a_next, b_prev, b_next;
        if(p > 0) a_prev = ind[p-1];
        if(p<(n-1)) a_next = ind[p+1];
        if(q > 0) b_prev = ind[q-1];
        if(q<(n-1)) b_next = ind[q+1];
        
        ind[p] = b;
        ind[q] = a;
        // for(auto z : ind) cout<<z<<" : ";
        // cout<<endl;
        if(p > 0) {
            ll a_prevt = ind[p-1];
            if(a_prev < a) {
                if(a_prevt > b) count++; //now it would
            }
            else if(a_prev > a) {
                if(a_prevt < b) count--; //now it shouldn't
            }
        }
        if(p<(n-1)){
            ll a_nextt = ind[p+1];
            if(a < a_next) {
                if(b > a_nextt) count++;
            }
            else if(a > a_next) {
                if(b < a_nextt) count--;
            }
        }
        if(q > 0) {
            ll b_prevt = ind[q-1];
            if(b_prev < b) {
                if(b_prevt > a) count++; //now it would
            }
            else if(b_prev > b) {
                if(b_prevt < a) count--; //now it shouldn't
            }
        }
        if(q<(n-1)){
            ll b_nextt = ind[q+1];
            if(b < b_next) {
                if(a > b_nextt) count++;
            }
            else if(b > b_next) {
                if(a < b_nextt) count--;
            }
        }
        cout<<count<<endl;
    }    
    
}