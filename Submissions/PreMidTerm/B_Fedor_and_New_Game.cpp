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

    // ll t; cin>>t;
    // while(t--) {}
    ll n, m, k;
    cin>> n >> m >> k;
    ll frnds = 0;
    vector<ll> x(m + 1);
    for(ll i = 0; i<=m; i++) cin>>x[i];
    for(ll i = 0; i<m; i++) {
        ll tmp = x[i]^x[m];
        ll count = 0;
        while(tmp) {
            if(tmp%2 == 1) count++;
            if(count > k) {
                break;
            }
            tmp/=2;
        }
        if(count <= k) frnds++;
    }
    cout<<frnds<<endl;
}