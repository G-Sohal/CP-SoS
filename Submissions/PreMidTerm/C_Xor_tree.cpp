#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

ll n;
vector<vector<ll>> adj(n);
vector<bool> visited(n);
vector<ll> length(n);

void dfs(ll v, ll len = 0) {
    visited[v] = true;
    length[v] = len;
    for (ll u : adj[v]) {
        if (!visited[u])
            dfs(u, len+1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // ll t; cin>>t;
    // while(t--) {}
    cin>>n;
    for(ll i=0; i<n; i++) {
        ll u, v; cin>>u>>v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> init(n);
    vector<ll> goal(n);
    for(ll i=0; i<n; i++) cin>>init[i];
    for(ll i=0; i<n; i++) cin>>goal[i];
    ll cnt = 0;
    ll current = 0;
    for(ll i=0; i<n; i++) {
        if(goal[i] == init[i]) continue;
        else {
            current++;
            cnt += current;
        }
    }
    cout<<cnt<<endl;
}