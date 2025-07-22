#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        vector<ll> v(n);
        ll maxx = -1;
        for(ll i=0; i<n; i++) {
            maxx = max(maxx, a[i]);
            v[i] = maxx;
        }
        ll sum = 0;
        for(ll k=1; k<=n; k++) {
            cout<<(sum + v[n-k])<<" ";
            sum+=a[n-k];
        }
        cout<<endl;
    }
}
