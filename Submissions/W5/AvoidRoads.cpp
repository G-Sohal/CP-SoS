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
 
void solve(){
	int width, height; cin>>width>>height;
    int m; cin>>m;
    vi p(width+1, 0);
    vector<vi> bad(height + 1, p);
    char a, b, c, d;
    f0(i, m) {
        cin>>a>>b>>c>>d;
        if(c > a) {
            bad[c-'0'][d-'0'] += 1;
        }
        else if(d > b) {
            bad[c-'0'][d-'0'] += 2;
        }
    }
    vi q(width+1, 0);
    vector<vi> dp(height+1, q);
    dp[0][0] = 1;

    f0(i, height+1) {
        f0(j, width+1) {
            if(i == 0 && j==0) continue;
            if(bad[i][j] == 3) continue;
            if(bad[i][j]) {
                if(i*j == 0) continue;
                if(bad[i][j] == 2)dp[i][j] = dp[i-1][j];
                if(bad[i][j] == 1)dp[i][j] = dp[i][j-1];
            }
            else if(i==0) {
                dp[i][j] = dp[i][j-1];
            } 
            else if(j==0) {
                dp[i][j] = dp[i-1][j];
            }
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    cout<<dp[height][width]<<endl;
}
 
signed main(){
	fastio();
	int t; cin>>t;
    while(t--) solve();
}