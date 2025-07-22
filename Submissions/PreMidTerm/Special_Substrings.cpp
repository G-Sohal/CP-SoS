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

    vector<char> s;
    char c;
    set<char> d;
    while(cin >> c) {s.push_back(c); d.insert(c);}
    ll m = d.size();
    ll n = s.size();
    if(m==1) {

    }
    else if(m == 2) {

    }
    else  {
        vector<pair<ll, char>> v;
        ll cnt = 1;
        for(ll i=1; i<=n; i++) {
            if(s[i] == s[i-1]) {
                cnt++;
            }
            else {
                v.push_back({cnt, s[i-1]});
                cnt = 1;
            }
            if(i == (n-1)) v.push_back({cnt, s[i]});
        }
        ll t = v.size();
        ll ans = 0;
        for(ll i=0; i<t; i++) {
            set<ll> count{v[i].second};
            ll pct = v[i].first;
            for(ll j=0; j<m; j++) {
                char q = v[i+1+j].second;
                ll ct = v[i+1+j].first;
                if(ct > pct) break;
                else if(ct == pct) ;
                else if(j==0) pct = ct;
                else break;
                if(j == (m-1)) ans++;
            }
        }
        cout<<ans<<endl;
    }
}