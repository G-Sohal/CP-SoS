#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        ll cost = LLONG_MAX;
        ll sza = 0;
        ll sz = 0;
        ll preva = a[0];
        
        for(ll i=0; i<n; i++) {
            if(a[i] == preva) {
                sza++;
            }
            else {
                preva = a[i];
                sza = 1;
            }
            cost = min(cost, (n - sza)*a[i]);
        }
    
        cout<<cost<<endl;
    }
}