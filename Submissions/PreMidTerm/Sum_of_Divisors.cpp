#include <iostream>
#define ll long long
using namespace std;
ll MODN = 1e9 + 7;
ll HALF_MODN = 500000004;
ll solve(ll s, ll t) {
    return ((((t - s + 1)%MODN) * ((s + t)%MODN)%MODN)* (HALF_MODN)%MODN);
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin>>n;
    ll sum = 0;
    ll i = 1;
    while(i<=n) {
        ll value = (n/i);
        ll last_number = (n/value);
        ll this_sum = solve(i, last_number);
        sum = ( sum + ( ( value * ( this_sum ) ) %MODN ) )%MODN;
        i = last_number + 1;
    }
    cout<<sum<<endl;
}