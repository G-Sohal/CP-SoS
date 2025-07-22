#include <iostream>
#include <vector>
#include <climits>
#define ll long long
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
	vector<int> adj(n);
	for (int i = 0; i < m; i++) {
		int a, b; cin>>a>>b;
        a--; b--;
        adj[a] = (adj[a] | (1 << b));
        adj[b] = (adj[b] | (1 << a));
	}
    vector<int> dp((1<<n), INT_MAX);
    for(int S = 0; S < (1<<n); S++) {
        bool connected_subgraph = true;
        for(int u = 0; u < n; u++) {
            if(S & (1<<u)) {
                if(((adj[u] | (1 << u)) & S) != S) {
                    connected_subgraph = false;
                    break;
                }
            }
        }
        if(connected_subgraph) dp[S] = 1;
    }
	
    for(int S = 0; S < (1<<n); S++) {
        for(int s = S; s > 0; s = ((s - 1)&S)) {
            int s_dash = S^s;
            if(dp[s] != INT_MAX && dp[s_dash] != INT_MAX) {
                dp[S] = min(dp[S], dp[s] + dp[s_dash]);
            }
        }
    }
    cout<<dp[(1 << n) - 1]<<endl;
}