#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;
 
void fastio(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}
 
signed main(){
	fastio();
    int n, m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++) {
        int a, b; cin>>a>>b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> ans;
    queue<int> q;
    vector<bool> used(n, false);
    
    for(int i=0; i<n; i++) {
        if(!used[i]) {
            ans.push_back(i);
            q.push(i);
            used[i] = true;
            while(!q.empty()) {
                int u = q.front(); q.pop();
                for(int v : adj[u]) {
                    if(!used[v]) {
                        used[v] = true;
                        q.push(v);
                    }
                }
            }
        }
    }
    
    cout<<(ans.size()-1)<<endl;
    for(int z : ans) {
        if(z) {
            cout<<"1 "<<(z+1)<<endl;
        }
    }
}