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
        ll n; cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        sort(a.begin(), a.end());
        for(ll i=0; i<n; i++) {
            ll z = 0;
            while(a[i]) {
                z++;
                a[i]/=2;
            }
            a[i] = z;
        }
        ll ans = 0;
        ll cnt = 1;
        for(ll i=0; i<n; i++) {
            if(i>0 && (a[i-1] == a[i])) {
                cnt++;
                if(i == (n-1) || a[i+1] != a[i]) ans+=(cnt * (cnt - 1))/2;
            }
            else cnt = 1;
        }
        cout<<ans<<endl;
    }
}