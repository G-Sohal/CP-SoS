#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int MAXN =1e9;
    ll t; cin>>t;
    while(t--) {
        int n, m, d; cin>>n>>m>>d;
        vector<int> p(n, 0), a(m, 0);
        for(int i=0; i<n; i++) {cin>>p[i]; p[i]--;}
        for(int i=0; i<m; i++) {cin>>a[i]; a[i]--;}
        vector<int> pos(n);
        for(int i=0; i<n; i++) {
            pos[p[i]] = i;
        }
        int ans = MAXN;
        for(int i=0; i<(m-1); i++) {
            if(pos[a[i+1]] <= pos[a[i]] || pos[a[i+1]]-pos[a[i]] > d) {
                ans = 0;
                break;
            }
            int swap_dist = pos[a[i+1]] - pos[a[i]];
            int inter_dist = d - pos[a[i+1]] + pos[a[i]] + 1;
            if((n-2) >= d) ans = min(min(ans, swap_dist), inter_dist);
            else ans= min(ans, swap_dist);
        }
        cout<<ans<<endl;
    }
}