#include <iostream>
#include <vector>
#include <iomanip>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++) {
        int a, b; cin>>a>>b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
}