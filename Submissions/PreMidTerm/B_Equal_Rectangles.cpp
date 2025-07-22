#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n; cin>>n;
        vector<ll> a(4*n);
        for(ll i=0; i<4*n; i++) cin>>a[i];
        sort(a.begin(), a.end());
        bool possible = true;
        vector<ll> b;
        for(ll i=1; i<4*n && possible; i+=2) {
            if(a[i] != a[i-1]) possible=false;
            else {
                b.push_back(a[i]);
            }
        }
        ll area = b[0]*b[(2*n)-1];
        for(ll i=0; i<2*n && possible; i++) {
            if(b[i]*b[(2*n)-i-1] != area) possible = false;
        }
        if(possible) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
