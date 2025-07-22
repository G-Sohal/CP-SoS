#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    if(b==0) return a;
    return gcd(b, a%b);

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // ll t; cin>>t;
    // while(t--) {}
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
        ll g = gcd((c*b),(a*d));
        ll Nr = min(c*b/g, a*d/g);
        ll Dr = max(c*b/g, a*d/g);
        cout<<Dr-Nr<<"/"<<Dr;
}