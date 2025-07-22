#include <iostream>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll MAXX = 1e6;
    vector<ll> v(MAXX + 1, 0);
    for(ll i=1; i<=MAXX; i++) {
        for(ll j=i; j<=MAXX; j+=i) {
            v[j]++;
        }
    }
    ll t; cin>>t;
    while(t--) {
        ll x; cin>>x;
        cout<<v[x]<<endl;
    }
}