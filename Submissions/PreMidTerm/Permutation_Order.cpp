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
        int a; cin>>a;
        if(a == 1) {
            ll n, k; cin>>n>>k;
            ll p = 0;
            ll f = 1;
            for(ll i=1; i<=n; i++) {
                if(f > k) {

                }
                else {
                    f = f*i;
                    p = f;
                }
            }
        }
        if(a == 2) {
            ll n; cin>>n;
            vector<ll> p(n);
            for(ll i=0; i<n; i++) cin>>p[i];
            for(ll i=(n-1); i>=0; i--) {
                
            }
        }
    }
}