#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll MODN = 1e9 + 7;
    ll n; cin>>n;
    if(n == 1) cout<<"0"<<endl;
    else if(n==2) cout<<"1"<<endl;
    else {
        ll d1 = 0;
        ll d2 = 1;
        ll d;
        for(ll i=3; i<=n; i++) {
            d = (i - 1)*(d1 + d2)%MODN;
            d1 = d2;
            d2 = d;
        }
        cout<<d<<endl;
    }
}