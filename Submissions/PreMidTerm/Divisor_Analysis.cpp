#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;
ll MOD = 1e9 + 7;

ll power(ll a, ll b) {
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

    ll n; cin>>n;
    ll num = 1;
    ll num1 = 1;
    ll sum = 1;
    ll prod = 1;
    ll z =1;
    ll sq = 1;
    for(ll i=0; i<n; i++) {
        ll x, k;
        cin>>x>>k;
        if(k%2 == 0) sq *= power(x, k/2);
        num = (num*(k+1)) % MOD;
        ll x_k = power(x%MOD, k%(MOD - 1)) % MOD;
        sum = ((sum * (((x_k)*x)%MOD - 1)%MOD)*(power(x-1, MOD - 2))%MOD);
        prod = power(prod, k + 1) * power(power(x, (k*(k+1))/2), num1)%MOD;
        
        num1 = (num1 * (k+1))%(MOD - 1);
    }
    cout<<num<<" "<<sum<<" "<<prod;
}