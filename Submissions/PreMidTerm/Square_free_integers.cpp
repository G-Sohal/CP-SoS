#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll MAXN = 1e7;
    vector<ll> mobius(MAXN+1, 0);
    mobius[1] = -1;
        
    for(ll i=1LL; i<=MAXN; i++) {
        if(mobius[i]) {
            mobius[i] *= -1;
            for(ll j=2LL*i;j<=MAXN; j+=i) mobius[j]+=mobius[i];
        }
    }
    
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll cnt =0;
        for(ll i=1; i*i<=n; i++) {
            if(mobius[i] != 0) {
                cnt += mobius[i]*(n/(i*i));
            }
        }
        cout<<cnt<<endl;
    }
}