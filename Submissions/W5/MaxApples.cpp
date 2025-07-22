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
	int n, m; cin>>n>>m;
    vector<vi> apple(n);
    f0(i, n) f0(j, m) cin>>apple[i][j];
    vector<vi> dp(n);
    dp[0][0] = apple[0][0];
    f0(i, n) {
        f0(j, m) {
            if(i==0 && j==0) continue;
            else if(i==0) dp[i][j] = apple[i][j] + dp[i][j-1];
            else if(j==0) dp[i][j] = apple[i][j] + dp[i-1][j];
            else dp[i][j] = apple[i][j] + max(dp[i][j-1], dp[i-1][j]);
        }
    }
    cout<<dp[n-1][m-1]<<endl;
}
 
signed main(){
	fastio();
	int t; cin>>t;
    while(t--) solve();
}