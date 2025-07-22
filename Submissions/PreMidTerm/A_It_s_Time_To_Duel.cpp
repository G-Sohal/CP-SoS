#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll a[n];
        bool lie = false;
        ll count0 = 0;
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            if(a[i] == 0) count0 +=1;
        }
        for(ll i=1; i<n && !lie; i++) {
                if(a[i-1]==0 && a[i]==0) lie=true;
            }
        if(lie) cout<<"YES\n";
        else cout<<"NO\n";
    }
}