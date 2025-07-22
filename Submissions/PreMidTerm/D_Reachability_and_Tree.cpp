#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
        int n; cin>>n;
        vector<pair<int, int>> edges;
        vector<int> deg(n, 0);
        
        for(int i=1; i<n; i++) {
            int u, v; cin>>u>>v;
            edges.push_back({u, v});
            deg[u-1]++; deg[v-1]++;
        }

        sort(edges.begin(), edges.end());
        bool pos = false;
        int dg;
        for(int i=0; i<n; i++) {
            if(deg[i]==2) {
                dg = i+1;
                pos = true;
                break;
            }
        }
        if(!pos) {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        int prev = -1;
        for(auto p : edges) {
            if(p.first)
        }
    }
}