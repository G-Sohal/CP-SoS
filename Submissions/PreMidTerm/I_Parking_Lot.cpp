#include <iostream>
#include <vector>
#define ll unsigned long long
using namespace std;

ll power(ll a, ll b) {
    ll res = 1;
    while(b) {
        if(b%2 == 1) res*=a;
        a*=a;
        b/=2;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin>>n;
    ll ans = 24*power(4, n-3) + 36*(n-3)*power(4, n-4);
    cout<<ans<<endl;
}