#include <iostream>
#include <vector>
#define ll long long
using namespace std;
ll MOD = 998244353;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n; cin>>n;
    ll MAXN = 1e6;
    vector<ll> count(MAXN, 0);
    ll num = 0;
    ll den = 0;
    for(ll i=0; i<n; i++) {
        ll k; cin>>k;
        den = (den + k * n);
        for(ll j=0; j<k; j++) {
            ll a; cin>>a;
            count[a] = (count[a] + 1);
            num = (num + 2 * count[a] - 1);
        }
    }
    vector<ll> inv(den + 1, 0);
    inv[1] = 1;
    for (int i = 2; i <= den; i++) { inv[i] = MOD - MOD / i * inv[MOD % i] % MOD; }
    cout << num * inv[den] % MOD <<endl;
}