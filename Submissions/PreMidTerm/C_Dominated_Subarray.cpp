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
        ll n; cin>>n;
        vector<pair<ll, ll>> a;
        for(ll i=0; i<n; i++) {
            ll val; cin>>val;
            a.push_back({val, i});
        }
        sort(a.begin(), a.end());
        ll prev_val = -1;
        ll prev_ind = -1;
        ll len = INF;
        for(auto p: a) {
            ll this_val = p.first;
            ll this_ind = p.second;
            if(this_val == prev_val) {
                len = min((this_ind - prev_ind), len);
            }
            prev_val = this_val;
            prev_ind = this_ind;
        }
        if(len == INF) cout<<"-1\n";
        else cout<<len+1<<"\n";
    }
}