
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
    vi a(n, 0);
    f0(i, n) cin>>a[i];
    // a = l*i + m*(n-i+1) = m*(n+1) + (l-m)*i - l,m >0
    bool pos = true;
    f0(i, n) {
        // cout<<a[i]<<" "<<i+1<<" : ";
        a[i]=a[i]%(n+1);
        if(a[i]%(i+1) != 0) {
            pos = false; break;
        }
    }
    if(pos) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
signed main(){
	fastio();
	int t; cin>>t;
    while(t--) solve();
}