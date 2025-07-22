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
        int n, m; cin>>n>>m;
        vector<vector<int>> adj(n);
        vector<pair<int, int>> edges(m);
        vector<int> deg(n, 0);
        for(int i=0; i<m; i++) {
            int x, y; cin>>x>>y;
            x--; y--;
            deg[x]++; deg[y]++;
            edges[i] = {x, y};
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int i = 0;
        bool done = false;
        for(; i<n; i++) {
            if(deg[i] > 0 && deg[i] < (n-1)) {
                done = true;
                break;
            }
        }
        if(done) {
            cout<<"2"<<endl;
                for(auto &p : edges) {
                if(p.first == i || p.second == i) cout<<"1 ";
                else cout<<"2 ";
            }
            cout<<endl;
        }
        else {
            int count = 1;
            cout<<"3"<<endl;
            for(auto &p : edges) {
                if((p.first == 0 || p.second == 0) && count<(n-1)) {cout<<"1 "; count++;}
                else if((p.first == 0 || p.second == 0)){
                    cout<<"3 ";
                }
                else cout<<"2 ";   
            }
        }
    }
}