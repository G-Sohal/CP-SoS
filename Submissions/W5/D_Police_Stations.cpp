#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
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
 
void solve(){
	
}
 
signed main(){
	fastio();
	int n, k, d; cin>>n>>k>>d;
    vector<int> p(k);
    for(int i=0; i<k; i++) {
        cin>>p[i];
        p[i]--;
    }
    vector<vector<int>> adj(n);
    for(int i=0; i<n; i++) {
        int x, y; cin>>x>>y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}