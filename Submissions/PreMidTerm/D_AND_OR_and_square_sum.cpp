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
    ll n; cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    // b =< a|b <= a+b
    // 0 <= a&b <= a
}