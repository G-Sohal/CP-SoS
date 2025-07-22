#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;
int bigf(int n) {
    if(n==1) return 0;
    for (int i = 2; i*i <= n; ++i) {
        if (n % i == 0) {
            return n / i;
        }
    }
    return 1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> a(n+1);
        for(int i=0; i<=n; i++) a[i] = i;

        vector<int> ans(n+1);
        ans = a;
        vector<bool> done(n+1, false);

        for(int i=n; i>1; i--) {
            if(done[i]) continue;
            int gf = bigf(a[i]);
            if(gf == 1) {
                if(a[i] > (n/2)) continue;
                int prev_num = ans[2*a[i]];
                // cout<<ans[2*a[i]]<<endl;
                // cout<<ans[a[i]]<<endl;
                // cout<<a[i]<<endl;
                // for(int j=1; j<=n; j++) {
                //     cout<<ans[j]<<" : ";
                // } cout<<endl;
                ans[a[i]] = prev_num;
                ans[2*a[i]] = a[i];
                done[a[i]] =true;
                continue;
            } 
            ans[i] = gf;
            ans[gf] = a[i];
            done[a[i]] = true;
            done[gf] = true;
        }
        for(int i=1; i<=n; i++) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}