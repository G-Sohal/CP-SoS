
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
	int n, x; cin>>n>>x;
    vi y;
    f0(i, n) {
        int z; cin>>z;
        if(z == 1) y.pb(i);
    }
    if(y.size() < 2) cout<<"YES"<<endl;
    else {
        if(x >= (y[y.size()-1] - y[0]+1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
 
signed main(){
	fastio();
	int t; cin>>t;
    while(t--) solve();
}