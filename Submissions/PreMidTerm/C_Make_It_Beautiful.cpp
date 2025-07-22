#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll num_ones(ll a) {
    ll cnt=0;
    while(a) {
        if(a%2==1) cnt++;
        a/=2;
    }
    return cnt;
}

ll num_bits(ll a) {
    ll cnt=0;
    while(a) {
        cnt++;
        a/=2;
    }
    return cnt;
}

void where_zero(ll a, ll m, vector<ll> &v) { 
    // v PB values which if added make beauty+=1; sort v; till last bit of k
    ll cnt=0;
    while(cnt<m) {
        if(a%2==0) {
            v.push_back(1LL <<(cnt));
        }
        a/=2;
        cnt++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n, k; cin>>n>>k;
        vector<ll> a(n);
        ll beauty = 0;
        ll m = num_bits(k);
        vector<ll> v;
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            beauty+=num_ones(a[i]);
            where_zero(a[i], m, v);
        }
        sort(v.begin(), v.end());
        for(auto z : v) {
            // cout<<z<<" : ";
            k-=z;
            if(k>=0) beauty++;
            else break;
        }
        cout<<beauty<<endl;

    }
}