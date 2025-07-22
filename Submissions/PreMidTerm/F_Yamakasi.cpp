#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin>>t;
    while(t--) {
        ll n, s, x; cin >> n >> s >> x;
        vector<ll> a(n);
        vector<ll> sum(n, 0);
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            if(i == 0) sum[i] = a[i];
            else sum[i] = sum[i - 1] + a[i];
        }
        ll ans = 0;
        for(ll i = 0; i<n; i++) {
            for(ll j = i; )
            for(ll j = i+1; j<n; j++) {
                ll sum_;
                if(i) sum_ = sum[j] - sum[i - 1];
                else sum_ = sum[j];
                if(sum_ == s )
            }
        }
    }

}