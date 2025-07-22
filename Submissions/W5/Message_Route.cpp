#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
 
void fastio(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}
 
signed main(){
	fastio();
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++) {
        int a, b; cin>>a>>b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int> q;
    vector<bool> used(n, false);
    vector<int> p(n);

    q.push(0);
    used[0] = true;
    p[0] = -1;
    while (!q.empty()) {
        int v = q.front(); q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                p[u] = v;
            }
        }
    }
    if (!used[n-1]) {
    cout << "IMPOSSIBLE";
    } else {
        vector<int> path;
        for (int v = (n-1); v != -1; v = p[v])
            path.push_back(v);
        reverse(path.begin(), path.end());
        cout << path.size() <<endl;
        for (int v : path)
            cout << (v+1) << " ";
    }
}