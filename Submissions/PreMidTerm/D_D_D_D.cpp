#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n, m, l;
        cin>>n>>m>>l;
        vector<ll> a(l);
        for(ll i=0; i<l; i++) cin>>a[i];
        vector<pair<ll, ll>> adj;
        for(ll i=0; i<m; i++) {
            ll u, v;
            cin>>u>>v;
            adj.push_back({u, v});
        }
        
    }
}