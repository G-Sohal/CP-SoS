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
        ll minn = a[n-1];
        for(ll i=0; i<(n-1); i++) {
            minn = minn&a[i];
        }
        // a&b <= min(a, b)
        cout<<minn<<endl;
    }
}