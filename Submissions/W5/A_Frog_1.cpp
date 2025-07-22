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
// atcoder problem dp
void solve(){
	int N; cin>>N;
    vi h(N);
    f0(i, N) cin>>h[i];
    vi dp(N, 0);
    dp[1] = abs(h[1] - h[0]);
    rep(i, 2, N) {
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), (dp[i-2] + abs(h[i] - h[i-2])));
    }
    cout<<dp[N-1]<<endl;
}
 
signed main(){
	fastio();
    solve();
}