#include <iostream>
#define ll unsigned long long
using namespace std;
ll MODN = 1e9 + 7;

ll solve(ll a, ll b) {
    if(b == 0) return 1;
    if(a == 0) return 0;
    ll ans = (solve(a, b/2))%MODN;
    ans = (ans * ans) % MODN;
    if(b%2 == 1) {
       ans = (ans * a) % MODN;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll a, b; cin>>a>>b;
        cout<<solve(a, b)<<endl;
    }
}