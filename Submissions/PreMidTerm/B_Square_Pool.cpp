#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n, s; cin>>n>>s;
        ll count = 0;
        for(ll i=0; i<n; i++) {
            ll dx, dy, x, y;
            cin>>dx>>dy>>x>>y;
            ll z = y - (dy/dx)*x;
            if(z%s == 0) count++;
        }
        cout<<count<<endl;
    }
}