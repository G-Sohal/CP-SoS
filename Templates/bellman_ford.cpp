#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = LLONG_MAX;

bool bellman_ford(int src, int n, const vector<tuple<int,int,ll>>& edges, vector<ll>& dist) {
    dist.assign(n, INF);
    dist[src] = 0;
    for (int i = 0; i < n-1; i++) {
        for (auto& [u,v,w] : edges) {
            if (dist[u] != INF && dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
            }
        }
    }
    for (auto& [u,v,w] : edges) {
        if (dist[u] != INF && dist[v] > dist[u] + w) return false;
    }
    return true;
}