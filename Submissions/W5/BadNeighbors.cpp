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
	int n; cin>>n;
    vi donations(n);
    f0(i, n) cin>>donations[i];
    if(n == 1) {
        cout<<donations[0]<<endl;
    }
    if(n == 2) {
        cout<<max(donations[0], donations[1])<<endl;
    }
    vi dp(n-1), DP(n-1);
    dp[0] = donations[0];
    dp[1] = max(donations[0], donations[1]);
    rep(i, 2, n-1) {
        dp[i] = max(dp[i-1], dp[i-2]+donations[i]);
    }
    DP[0] = donations[1];
    DP[1] = max(donations[1], donations[2]);
    rep(i, 3, n) {
        DP[i-1] = max(DP[i-2], DP[i-3]+donations[i]);
    }
    cout<<max(dp[n-2], DP[n-2])<<endl;
}
 
signed main(){
	fastio();
	int t; cin>>t;
    while(t--) solve();
}