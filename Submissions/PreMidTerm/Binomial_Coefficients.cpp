#include <iostream>
#include <vector>
#define ll long long
using namespace std;
ll MODN = 1e9 + 7;
ll MAXN = 1e6;

ll powmod(ll a, ll b = MODN - 2) {
    ll res = 1;
    while(b) {
        if(b%2 == 1) res = (res*a) %MODN;
        a = (a*a)%MODN;
        b/=2;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<ll> factorial(MAXN + 1);
    vector<ll> inverse(MAXN + 1, 1);
    factorial[0] = 1;
    factorial[1] = 1;
    for(ll i=2; i<=MAXN; i++) {
        factorial[i] = (factorial[i-1]*i )% MODN;
        inverse[i] = powmod(factorial[i])%MODN;
    }
    ll t; cin>>t;
    while(t--) {
        ll a, b; cin>>a>>b;
        cout<< factorial[a] * inverse[b]%MODN * inverse[a-b] % MODN <<endl;
    }
}
