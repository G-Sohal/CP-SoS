#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

ll max(ll a, ll b) {
    if(a>b) return a;
    return b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> a(n, 0);
        for(int i=0; i<n; i++) cin>>a[i];
        if(n==2) {
            if(a[0] < a[1]) cout<<2*a[0]<<endl;
            else cout<<(a[0] + a[1])<<endl;
        }
        else {
            vector<int> ma(3, 0);
            ma[0] = a[0]; ma[1] = min(ma[0], a[1]); ma[2] = min(a[2], ma[1]);
            if(ma[0]==ma[1] && ma[2]==ma[1]) {
                cout<<2*a[0]<<endl;
            }
            else if(ma[0] == ma[1]) {
                int z = min(2*a[0], a[0]+a[2] + min(a[0]+a[2], a[1]));
                cout<<z<<endl;
            }
            else {
                int z = min(a[0]+a[1], min(a[0]+a[2] + min(a[0]+a[2], a[1]), a[0] + min(a[0], a[1] + a[2]) ));
                cout<<z<<endl;
            }

        }
        // vector<int> ma(n, 0);
        // ma[0] = a[0];
        // ll sum = ma[0];
        // for(int i=1; i<n; i++) {
        //     ma[i] = min(ma[i-1], a[i]);
        //     sum += ma[i];
        // }
        // vector<int> sa(n, 0);
        // for(int i=1; i<n; i++) {
        //     sa[i] = sa[i-1] + (a[i] > ma[i-1]);
        // }
        // vector<ll> fa(n+1, 0);
        // for (int k = (n-1); k >= 0; k--) {
        //     fa[k] = fa[k+1] + ma[k];
        // }
        // ll x = 0;
        // for (int j = 2; j <= n; j++) {
        //     if (sa[j-2] > 0) {
        //         x = max(x, fa[j-1]);
        //     }
        // }
        // cout<<(sum - x)<<endl;
    }
}