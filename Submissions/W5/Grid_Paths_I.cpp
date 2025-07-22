
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
typedef vector<bool> vb;

void fastio(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}
//cses dp prob

void solve(){
	int n; cin>>n;
    vb v(n, false);
    vector<vb> bad(n, v);
    f0(i, n) {
        f0(j, n) {
            char c; cin>>c;
            if(c == '*') bad[i][j] = true;
        }
    }
    if(bad[0][0] || bad[n-1][n-1]) {
        cout<<"0"<<endl;
        return;
    }
    vi x(n, 0);
    vector<vi> dp(n, x);
    dp[0][0] = 1;
    f0(i, n) {
        f0(j, n) {
            if(!bad[i][j]) {
                if(i<(n-1))dp[i+1][j] = (dp[i+1][j] + dp[i][j])%MOD;
                if(j<(n-1))dp[i][j+1] = (dp[i][j+1] + dp[i][j])%MOD;
            }
        }
    }
    cout<<dp[n-1][n-1]<<endl;
}
 
signed main(){
	fastio();
	solve();
}