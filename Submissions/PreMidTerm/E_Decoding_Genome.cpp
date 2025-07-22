#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll MODN = 1e9 + 7;

ll power(ll a, ll b) {
    ll res = 1;
    while(b) {
        if(b & 1) res = (res*a)%MODN;
        a = (a*a)%MODN;
        b/=2;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, k; cin>>n>>m>>k;
    vector<pair<char, char>> forb(k);
    for(ll i=0; i<m; i++) {
        char a, b;
        cin>>a>>b;
        forb[i] = {a, b};
    }
    ll total = power(m, n%(MODN - 1));
    ll MAXN = 1e6 + 5;
    vector<ll> mobius(MAXN + 1, 0);
    vector<ll> number(MAXN + 1, 0);
    mobius[1] = 1;
    for(ll i=1; i<=MAXN; i++) {
        if(mobius[i]) {
            mobius[i] = -mobius[i];
            for(ll j=2LL*i; j<=MAXN; j+=i) {
                mobius[j]+=mobius[i];
                if(i>1) number[j]++;
            }
        }
    }
    ll ans = 0;
    for(ll i=1; i<=MAXN; i++) {
        ans = (ans + total*mobius[i]*power(power(power(m, 2), number[i]), MODN - 1))%MODN;
    }
    cout<<ans<<endl;
}