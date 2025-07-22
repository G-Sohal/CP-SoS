#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> cycle;
vector<int> parent;

bool dfs(int v, int u) {
    visited[v] = true;
    parent[v] = u;
    for(int w : adj[v]) {
        if(visited[w] && w != u) {
            cycle = {v};
            while(v != w) {
                cycle.push_back(parent[v]);
                v = parent[v];
            }
            return true;
        }
        if(!visited[w]) return dfs(w, v);
        
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    adj.resize(n);
    visited.resize(n, false);
    parent.resize(n, -1);
    visited.resize(n, false);
    parent.resize(n, -1);
    
    for(int i=0; i<m; i++) {
        int a, b; cin>>a>>b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for(int i=0; i<n; i++) {
        if(!visited[i]) {
            visited[i] = true;
            parent[i] = -1;
            if(dfs(i, -1)) {
                cout<<cycle.size() + 1<<endl;
                reverse(cycle.begin(), cycle.end());
                for(int z : cycle) cout<<z+1<<" ";
                cout<<cycle[0]+1<<endl;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    
}