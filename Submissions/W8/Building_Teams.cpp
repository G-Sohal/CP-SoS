#include <iostream>
#include <vector>
#include <iomanip>
#include <queue>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++) {
        int a, b;
        cin>>a>>b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> done(n, false);
    vector<int> color(n, 2);
    for(int i=0; i<n; i++) {
        if(!done[i]) {
            queue<int> q;
            q.push(i);
            color[i] = 0;
            done[i] = true;
            while(!q.empty()) {
                int u = q.front(); q.pop();
                for(int v : adj[u]) {
                    if(!done[v]) {
                        q.push(v); 
                        color[v] = 1 - color[u]; 
                        done[v] = true;
                    }
                    else {
                        if(color[u] + color[v] != 1) {
                            cout<<"IMPOSSIBLE"<<endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++) cout<<(color[i]+1)<<" ";
}