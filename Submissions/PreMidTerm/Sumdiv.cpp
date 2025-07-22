#include <iostream>
#define ll long long
using namespace std;
ll MOD = 1e9 + 7;

ll powmod(ll a, ll b) {
    b = b%(MOD - 1);
    a = a%MOD;
    ll res = 1;
    while(b) {
        if(b & 1) res=(res*a)%MOD;
        a = (a*a)%MOD;
        b>>=1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll a, b;
    cin>>a>>b;
    ll tmp = a;
    ll ans = 1;
    for(ll p = 2; p*p<=a; p++) {
        if(tmp%p == 0) {
            ll e = 0;
            while(tmp%p == 0) {
                tmp/=p;
                e++;
            }
            ll num = (powmod(p, (e*b) + 1) - 1)%MOD;
            ll den_inv = powmod(p - 1, MOD - 2);
            ans = ans * num%MOD * den_inv%MOD;
        }
    }
    if(tmp > 1) {
        ll p = tmp;
        ll num = (powmod(p, (b) + 1) - 1)%MOD;
        ll den_inv = powmod(p - 1, MOD - 2)%MOD;
        ans = (ans * num%MOD * den_inv%MOD)%MOD;
    }
    cout<<ans<<endl;
}