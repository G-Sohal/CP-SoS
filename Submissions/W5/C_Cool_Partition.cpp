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
    int j=1;
    int cnt=1;
    set<int> s = {a[0]};
    while(j<n) {
        set<int> st;
        set<int> stt = s;
        int i = j;
        for(;i< n; i++) {
            st.insert(a[i]);
            if(stt.count(a[i])) stt.erase(a[i]);
            if(stt.size() == 0) {
                cnt++; break;
            }
        }
        s = st;
        j = (i+1);
    }
    cout<<cnt<<endl;
}
 
signed main(){
	fastio();
	int t; cin>>t;
    while(t--) solve();
}