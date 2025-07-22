#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x; cin>>n>>x;
    vector<int> w(n, 0);
    for(int i=0; i<n; i++){ cin>>w[i];}
    vector<pair<int, int>> dp(1<<n, {n+1, x+1});

    dp[0] = {1, 0};
    for(ll S=1; S<(1<<n); S++) {
        for(int j=0; j<n; j++) {
            if((1<<j)&S) {
                auto option = dp[S^(1<<j)];
                if((option.second + w[j]) <= x) {
                    option.second+=w[j];
                } else{
                    option.first++;
                    option.second = w[j];
                }
                dp[S] = min(dp[S], option);
            }
        }
    }
    cout<<dp[(1<<n)-1].first<<endl;
}