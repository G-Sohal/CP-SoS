#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a/gcd(a, b))*b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<ll> b(n, 0);
        for (int i = 0; i < n; ++i) {cin>>b[i];}
        ll a = b[0];
        ll x = 1;
        for(int i=1; i<n; i++) {
            if(b[i]%a == 0) a=b[i];
            else {
                ll z = gcd(a, b[i]);
                x = lcm(x, a/z);
                a = b[i];
            }
        }
        cout<<x<<endl;
    }
}