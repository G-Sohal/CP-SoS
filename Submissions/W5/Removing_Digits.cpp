
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
// cses dp prob
int max_dig(int n) {
    int dg = 0;
    while(n) {
        dg = max(dg, n%10);
        n/=10;
    }
    return dg;
}

void solve(){
	int n; cin>>n;
    vi dp(n+1, 0);
    dp[0] = 0;
    dp[1] = 1;
    rep(i,2, (n+1)) {
        dp[i] = (1 + dp[i - max_dig(i)]);
    }
    cout<<dp[n]<<endl;
}
 
signed main(){
	fastio();
	solve();
}