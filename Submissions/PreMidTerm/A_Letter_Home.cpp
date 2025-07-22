#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n, s; cin>>n>>s;
        vector<ll> x(n);
        ll j = 0;
        for(ll i=0; i<n; i++) {
            cin>>x[i];
        }
        if(s <= x[0]) {
            cout<<(x[n-1] - s)<<endl;
        }
        else if(s >= x[n-1]) {
            cout<<(s - x[0])<<endl;
        }
        else {
            ll a = min(s - x[0], x[n-1] - s);
            ll b = x[n-1] - x[0];
            cout<<a + b<<endl;
        }
    }
}