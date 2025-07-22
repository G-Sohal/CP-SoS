#include <iostream>
#include <vector>
using namespace std;
// dfs prob from cpalgo - spoj

void fastio(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}

vector<vector<int>> adj;

vector<bool> visited;

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}

signed main() {
    fastio();
    int h, w;
    int t=1;
    while(cin>>h>>w) {
        if(h*w == 0) return 0;
        vector<vector<int>> grid(h);
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++) {
                char c; cin>>c;
                grid[i][j] = c - 'A';
            }
        }
        int ans = 0;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++) {
                if(grid[i][j]==0) {
                    ans = max(ans, dfs[i][j]);
                }
            }
        }
    }
}