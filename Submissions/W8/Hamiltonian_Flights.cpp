#include <iostream>
#include <vector>

#define ll long long
using namespace std;
// bitmask DP - CSES

ll MODN = 1e9 + 7;
const ll MAXN = 20; // otherwise array cant be initialised variable number

ll dp[1 << MAXN][MAXN];
vector<int> flight_from[MAXN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin>>n>>m;

    for(int i=0; i<m; i++) {
        int x, y; cin>>x>>y;
        x--; y--;
        flight_from[y].push_back(x);
    }
    dp[1][0] = 1;

    for(int S=2; S<(1<<n); S++) {
        if((S&1) == 0) continue;
        if((S&(1 << (n-1))) && S != ((1 << (n)) - 1)) continue;
        for(int end = 0; end<n; end++) {
            if((S & (1 << end)) == 0) continue;
            int S_dash = S - (1 << end);
            for(int v : flight_from[end]) {
                if((S & (1 << v))) dp[S][end] = (dp[S][end] + dp[S_dash][v])%MODN;
            }
        }
    }
    cout<<dp[(1 << n) - 1][n-1]<<endl;
}