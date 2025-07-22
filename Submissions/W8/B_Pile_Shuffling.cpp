#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int n; cin>>n;
        ll ans = 0;
        for(int i=0; i<n; i++) {
            int a, b, c, d;
            cin>>a>>b>>c>>d;
            if(b > d) ans += max(b - d, 0) + a;
            else ans += max(a - c, 0);
        }
        cout<<ans<<endl;
    }
}