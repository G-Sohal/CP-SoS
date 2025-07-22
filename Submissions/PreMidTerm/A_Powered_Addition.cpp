#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll max(ll a, ll b) {
    if(a>b) return a;
    return b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        vector<ll> a(n);
        ll maxx = 0;
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            if(i>0 && a[i-1] > a[i]) {
                maxx = max(maxx, a[i-1] - a[i]);
                a[i] = a[i-1];
            }
        }
        if(maxx == 0) cout<<"0\n";
        else {
            ll T = 0;
            ll val = 1;
            while(maxx >= val) {
                val*=2;
                T++;
            }
            cout<<T<<endl;
        }
    }
}