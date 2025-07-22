#include <iostream>
#include <vector>
#define ll unsigned long long
using namespace std;
 
const ll MODN = 1e9 + 7;
 
ll gcd(ll a, ll b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
ll lcm(ll a, ll b){
    return (a / gcd(a, b) * b);
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n; cin >> n;
    vector<ll> p(n);
    for(ll i = 0; i < n; i++) {
        cin >> p[i]; 
        p[i]--;
    }
 
    vector<bool> visited(n, false);
    ll ans = 1;
 
    for(ll i = 0; i < n; i++) {
        if (!visited[i]) {
            ll l = 0;
            ll x = i;
            while (!visited[x]) {
                visited[x] = true;
                x = p[x];
                l++;
            }
            ans = lcm(ans, l);
        }
    }
 
    cout << ans % MODN << "\n";
}
