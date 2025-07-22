#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll MODN = 1e9 + 7;

ll power(ll m, ll p) {
    ll ans = 1;
    for(ll i=0; i<p; i++) ans = (ans*m)%MODN;
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t; cin>>t;
    while(t--) {
        ll n, k;
        cin>>n>>k;
        ll ans = power(n, k);
        cout<< ans <<endl;
    }
}