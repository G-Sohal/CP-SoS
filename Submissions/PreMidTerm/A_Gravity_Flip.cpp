#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
    cin.tie(0);
    ll n; 
    cin>>n;
    vector<ll> a(n);
    ll max_ht = 0;
    for(ll i =0; i<n; i++) {
        cin>>a[i];
        max_ht = max(max_ht, a[i]);
    }
    vector<ll> c(n, 0);
    for(ll j=0; j<max_ht; j++) {
        ll z = 0;
        for(ll i = n-1; i>=0; i--) {
            if(a[i] > j) {
                c[n-1-z]++;
                z++;
            }
        }
    }
    for(ll w : c) cout<<w<<" ";
    cout<<endl;    
}