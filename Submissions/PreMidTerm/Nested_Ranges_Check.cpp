#include<iostream>
#include<vector>
#define ll long long
using namespace std;
 
int main() {
    ll n;
    cin>>n;
    vector<pair<ll, ll>> b;
    for(ll i=0; i<n; i++) {
        ll x, y;
        cin>>x>>y;
        b.push_back({x, y});
    }
    vector<ll> c(n, 0);
    vector<ll> d(n, 0);
    for(ll j=0; j<n; j++) {
        auto t = b[j];
        for(ll i=0; i<n; i++) {
            if(i==j) continue;
            auto r = b[i];
            if(t.first<=r.first && r.second<=t.second) {
                c[j]=1;
                d[i]=1;
            }
        }
    }
    for(auto z : c) cout<<z<<" ";
    cout<<endl;    
    for(auto z : d) cout<<z<<" ";
    cout<<endl;
}