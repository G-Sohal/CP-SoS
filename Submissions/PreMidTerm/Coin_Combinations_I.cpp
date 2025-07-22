#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main() {
    ll n, x;
    cin>>n>>x;
    vector<ll> c(n);
    for(ll i=0; i<n; i++) cin>>c[i];

    vector<ll> ans(x+1, 0);
    ans[0] = 1;
    for(ll i = 0; i<=x; i++) {
        for(ll j = 0; j<n; j++) {
            if((i-c[j]) >= 0) {
                ans[i] += ans[i - c[j]];
                ans[i] %= 1000000007;
            }
        }
    }
    cout<<ans[x];
}