#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int n, q; cin>>n>>q;
        vector<int> a(n, 0);
        for(int i=0; i<n; i++) cin>>a[i];
        int cost = 0;
        vector<vector<pair<int, int>>> adj(n);
        for(int i=0; i<(n-1); i++) {
            int u, v, c; cin>>u>>v>>c;
            u--; v--;
            adj[u].push_back({v, c});
            adj[v].push_back({u, c});
            if(a[u] != a[v]) cost+=c;
        }
        while(q--) {
            int v, x;
            cin>>v>>x;
            v--;
            if(a[v] == x) cout<<cost<<endl;
            else {
                for(auto &p : adj[v]) {
                    int u = p.first;
                    int wt = p.second;
                    if(a[u] == a[v]) {
                        // pehlan same si hun nahin hai
                        cost += wt;
                    } 
                    else if(a[u] == x) {
                        //pehlan diff si hun same haiga
                        cost -= wt;
                    }
                }
                cout<<cost<<endl;
            }
            a[v] = x; 
        }
    }
}