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
        int n, m; cin>>n>>m;
        vector<int> dp(n+1, 1);
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 7; //5*dp[1] + 2*dp[0]
        dp[3] = 37; //5*dp[2] + 2*dp[0]
        dp[4] = 273; //7*dp[3] + 2*dp[2]
        dp[5] = 2672; //9*dp[4] + 6*dp[3] - dp[2] 
        for(int i=4; i<=n; i++) {
            dp[i] =  ;
        }
        cout<<ans[n]%m<<endl;
    }
}