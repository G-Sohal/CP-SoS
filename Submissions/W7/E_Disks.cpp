#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

bool touch(tuple<int, int, int> i, tuple<int, int, int> j) {
    int x1, y1, r1; 
    x1 = get<0>(i); y1 = get<1>(i); r1 = get<2>(i);
    int x2, y2, r2;
    x2 = get<0>(j); y2 = get<1>(j); r2 = get<2>(j);
    if((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) == (r1 + r2)*(r1 + r2)) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    // 3 touchig circles radii fixed haige
    // so on for 3+
    // connected compo of size 2 doesnt strictly decrease
    // for one 2 deg circle diameter is able to do it
    // any odd number for that matter
    // just check no 3+ touch together in such an odd 

    vector<tuple<int, int, int>> circles(n);
    for(int i=0; i<n; i++) {
        int x, y, r; cin>>x>>y>>r;
        circles[i] = {x, y, r};
    }

    vector<vector<int>> adj(n);
    for(int i=0; i<n; i++) {
        for(int j=(i+1); j<n; j++) {
            if(touch(circles[i], circles[j])) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    vector<bool> visited(n,false);
    for(int i=0; i<n; i++) {
        if(!visited[i]) {
            if(adj[i].size() > 1) continue;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            int deg1 = 0;
            bool bad = false;
            while(!q.empty()) {
                int u=q.front(); q.pop();
                int d=adj[u].size();
                if(d==1) deg1++;
                if(d>2) {bad=true;}
                for(int v:adj[u]) {
                    if(!visited[v]) {
                        visited[v]=true;
                        q.push(v);
                    }
                }
            }
            if(!bad && deg1 >= 1) {
                cout<<"YES";
                return 0;
            }
        }
    }
    for(int i=0; i<n; i++) {
        if(!visited[i]) {
            if(adj[i].size() == 2) continue;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            int deg1 = 1;
            bool bad = false;
            while(!q.empty()) {
                int u=q.front(); q.pop();
                int d=adj[u].size();
                if(d!=2) {bad=true; break;}
                for(int v:adj[u]) {
                    if(!visited[v]) {
                        visited[v]=true;
                        q.push(v);
                        deg1 += 1;
                    }
                }
            }
            if(!bad && deg1 % 2 == 1 && deg1 > 3) {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}