#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main() {
    ll n, x;
    cin>>n>>x;
    vector<ll> c(n);
    for(ll i=0; i<n; i++) cin>>c[i];
    vector<ll> ans(x+1, -1);
    ans[0] = 0;
    for(ll i = 0; i<=x; i++) {
        for(ll j = 0; j<n; j++) {
            if(((i - c[j]) >= 0) && (ans[i - c[j]] != (-1))) {
                if(ans[i] == -1) ans[i] = ans[i - c[j]] + 1;
                else ans[i] = min(ans[i], (ans[i - c[j]] + 1));
            }
        }
    }
    cout<<ans[x];
}