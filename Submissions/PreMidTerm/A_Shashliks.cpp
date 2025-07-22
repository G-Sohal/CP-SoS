#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll k, a, b, x, y;
        cin>>k>>a>>b>>x>>y;
        if(x > y) {
            swap(x, y);
            swap(a, b);
        }
        ll ans = 0;
        if(k>=a) ans += (k-a)/x + 1;
        k = k - (ans*x);
        if(k>=b) ans += (k-b)/y + 1;
        cout<<ans<<endl;
    }

}