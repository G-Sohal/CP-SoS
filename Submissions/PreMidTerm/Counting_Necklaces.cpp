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
    ll MODN = 1e9 + 7;
    ll n, m; cin>>n>>m;
    vector<ll> f(m+1, 0);
    f[1] = m;
    for(ll i=2; i<=m; i++) {
        f[i] = ((m-i+1)*f[i-1])%MODN;
    }
    for(auto z : f) cout<<z<<" ";
    cout<<endl;
    ll ans = 0;
    for(ll i=1; i<=n; i++) {
        ans = (ans + )
    }
    cout<<ans<<endl;
}