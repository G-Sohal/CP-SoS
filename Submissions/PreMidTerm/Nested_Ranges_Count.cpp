#include<iostream>
#include<vector>
#include<unordered_map>
#define ll long long
using namespace std;
 
int main() {
    ll n;
    cin>>n;
    unordered_map<ll, pair<ll, ll>> a;
    for(ll i=0; i<n; i++) {
        ll x, y;
        cin>>x>>y;
        a.insert({x, {y, i}});
    }
    vector<ll> c(n, 0);
    vector<ll> d(n, 0);
    for(auto t : a) {
        auto start = t.first;
        auto tmp = t.second;
        auto end = tmp.first;
        auto j = tmp.second;
        for(ll i=start; i<=end; i++) {
            auto it = a.find(i);
            if(it != a.end()){
                auto start_2 = it->first;
                auto tmp_2 = it->second;
                auto end_2 = tmp_2.first;
                auto k = tmp_2.second;
                if(start <= start_2 && end >= end_2 && j!=k) {
                    c[j]++;
                    d[k]++;
                }
            }
        }
    }
    for(auto z : c) cout<<z<<" ";
    cout<<endl;    
    for(auto z : d) cout<<z<<" ";
    cout<<endl;
}