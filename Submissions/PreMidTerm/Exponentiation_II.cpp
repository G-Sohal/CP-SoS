#include <iostream>
#define ll unsigned long long
using namespace std;


ll solve(ll a, ll b, ll MODN) {
    a = a%MODN;
    b = b%MODN;
    if(b == 0) return 1;
    if(a == 0) return 0;
    ll ans = 1;
    while(b) {
        if(b%2 == 1) {
            ans = (ans * a) % MODN;
        }
        b/=2;
        a = (a*a)%MODN;
    }
    return ans%MODN;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll MODN = 1e9 + 7;
    ll t; cin>>t;
    while(t--) {
        ll a, b, c; cin>>a>>b>>c;
        cout<<solve(a, solve(b, c, MODN - 1), MODN)<<endl;
    }
}