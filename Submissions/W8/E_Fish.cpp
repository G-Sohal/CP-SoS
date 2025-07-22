#include <iostream>
#include <vector>
#include <iomanip>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    const int MAXN = 18;
    int n; cin>>n;
    vector<vector<double>> a(n, vector<double>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    vector<double> dp((1<<n), 0.0);
    dp[(1<<n) - 1] = 1.0;
    for(int S = ((1<<n)-1); S>=1; S--) {
        int cnt = 0;
        for(int i=0; i<n; i++) {
            if(S & (1<<i)) cnt++;
        }
        if(cnt < 2) continue;
        else {
            double enc = (2.0)/(cnt * (cnt - 1));
            for(int i=0; i<n; i++) {
                if(S & (1<<i)) {
                    for(int j = 0; j < n; ++j) {
                    if (i == j) continue;
                    if ((S >> j) & 1) {
                        int next_mask = S ^ (1 << j);
                        dp[next_mask] += dp[S] * a[i][j] * enc;
                    }
                }
                }
            }
        }
    }
    cout<< fixed << setprecision(6);
    for(int i=0; i<n; i++) {
        cout<<dp[1 << i]<<" ";
    }
}