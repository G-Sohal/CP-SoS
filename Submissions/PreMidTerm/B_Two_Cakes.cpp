#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;
ll INF = 1e9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n; 
        cin>>n;
        vector<ll> a(2*n);
        vector<pair<ll, ll>> b(2*n);
        for(ll i=0; i<(2*n); i++) {
            cin>>a[i];
            b[i] = {a[i], i};
        }
        sort(b.begin(), b.end());
        ll prev_ds = 0;
        ll prev_dd = 0;
        ll MINDIST = 1e9;
        for(ll j=(2*n - 1); j>=0; j-=2) {
            // b[j]
            // b[j-1]
        }
    }
}