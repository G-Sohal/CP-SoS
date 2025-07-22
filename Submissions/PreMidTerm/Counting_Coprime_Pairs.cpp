#include <iostream>
#include <vector>
#define ll unsigned long long
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin>>n;
    vector<ll> x(n, 0);
    ll MAXN = 1e6;
    for(ll i=0; i<n; i++) {
        cin>>x[i];
    }
    vector<ll> count(MAXN + 1, 0);
    for(ll i=0; i<n; i++) {
        for(ll j=1; j<=x[i]; j++) {
            if(x[i]%j == 0) count[j]++;
        }
    }

    vector<ll> mobius(MAXN + 1, 0);
    mobius[1] = -1;
    for(ll i=1; i<=MAXN; i++) {
        if(mobius[i]) {
            mobius[i] = -mobius[i];
            for(ll j=2LL*i; j<=MAXN; j+=i) mobius[j]+=mobius[i];
        }
    }

    ll ans = 0;
    for(ll i=1; i<=MAXN; i++) {
        if(count[i] > 1) ans += 1LL*mobius[i]*(count[i]*(count[i]-1)/2) ;
    }
    cout<<ans<<endl;
}