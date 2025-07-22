#include <iostream>
#define ll long long
using namespace std;
ll MODN = 1e9 + 7;

ll power(ll a, ll b) {
    ll res = 1;
    while(b) {
        if(b%2 == 1) {
            res = (res*a)%MODN;
        }
        a = (a*a)%MODN;
        b/=2;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll a, b, k;
        cin>>a>>b>>k;
        cout << (k*(a-1))%MODN + 1 << " " << (k*(b-1))
        cout << (power(k, a) - 1)%MODN * power(k-1, MODN - 2) %MODN<< " " << (power(k, b) - 1)%MODN * power(k-1, MODN - 2) %MODN << endl; 
    }
}