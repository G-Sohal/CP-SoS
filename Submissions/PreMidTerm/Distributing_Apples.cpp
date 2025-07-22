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

    ll n, m; cin>>n>>m;
    ll MODN = 1e9 + 7;
    // ans = (n-1+m  m)
    ll num = 1;
    ll den = 1;
    ll x = max(n-1, m);
    ll y = min(n-1, m);
    for(ll i=(x+1); i<=(n-1+m); i++) {
        num = (num*i)%MODN;
    }
    for(ll i=2; i<=y; i++) {
        den = (den*i)%MODN;
    }
    ll den_inv = 1;
    ll exp = MODN - 2;
    while(exp) {
        if(exp%2 == 1) den_inv = (den_inv * den)%MODN;
        den = (den*den) %MODN;
        exp/=2;
    }
    cout<< num * den_inv %MODN <<endl;
}