#include <bits/stdc++.h>
using namespace std;

void bfs(int start, const vector<vector<int>>& adj, vector<int>& dist) {
    int n = adj.size();
    dist.assign(n, -1);
    queue<int> q;
    dist[start] = 0;
    q.push(start);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}