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
// cses dp probs
void solve(){
	int n, x; cin>>n>>x;
    vi c(n);
    f0(i, n) cin>>c[i];
    vi dp(x+1, 0);
    dp[0] = 1;
    f0(j, n) {
        f0(i, x+1) {
            if((i - c[j]) >= 0) dp[i] = (dp[i] + dp[i - c[j]])%MOD;
        }
    }
    cout<<endl;
    cout<<dp[x]<<endl;
}
 
signed main(){
	fastio();
    solve();
}