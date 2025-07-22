#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int n, m; cin>>n>>m;
        vector<ll> b;
        ll x, y, z;
        for(int i = 0; i<n; i++) {
            cin>>x;
            b.push_back(x);
        }
        vector<ll> s;
        vector<ll> t;
        vector<ll> w;
        for(int i = 0; i<n; i++) {
            cin>>x>>y>>z;
            s.push_back(x);
            t.push_back(y);
            w.push_back(z);
        }
        
    }
}