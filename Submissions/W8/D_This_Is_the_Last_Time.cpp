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

    ll t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        vector<pair<int, int>> lrk;
        for(int i=0; i<n; i++) {
            int l, r, x; cin>>l>>r>>x;
            lrk.push_back({l, x});
        }
        sort(lrk.begin(), lrk.end());
        int ans = k;
        for(int i=0; i<n; i++) {
            if(ans >= lrk[i].first) {
                ans = max(ans, lrk[i].second);
            }
        }
        cout<<ans<<endl;
    }
}