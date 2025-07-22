#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <queue>
using namespace std;

#define rep(i, a, b) for(int i = a; i < b; ++i)
#define tr(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)((x).size())
#define w(a) while(a--)
#define f0(i,a) for(ll i=0;i<a;i++)
#define cint(n) int n; cin >> n;
#define cll(n) ll n; cin >> n;
#define pb push_back

#define MOD 1000000007
#define INF 1e18

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<string> vs;
 
void fastio(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}
 
signed main(){
	fastio();
    int n; cin>>n;
    int m, k; cin>>m>>k;
    int s = 1;
    vector<vector<int>> adj(n+1);
    for(int i=0; i<m; i++) {
        int x, y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    set<tuple<int, int, int>> forbidden;
    for(int i=0; i<k; i++) {
        int a, b, c; cin>>a>>b>>c;
        forbidden.insert({a, b, c});
    }
    queue<int> q;
    vector<bool> used(n);
    vector<int> p(n);

    q.push(s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                // cout<<v<<" --> "<<u<<endl;
                p[u] = v;
                if(forbidden.count({p[v], v, u})) {
                    used[v] = false;
                    continue;
                }
                used[u] = true;
                q.push(u);
            }
        }
    }
    int u = n;
    if (!used[u]) {
        cout << "-1";
    } 
    else {
        vector<int> path;
        for (int v = u; v != -1; v = p[v]) path.push_back(v);
        reverse(path.begin(), path.end());
        cout<<p.size() - 2<<endl;
        for (int v : path)
            cout << v << " ";
    }
}