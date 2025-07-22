#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

ll max(ll a, ll b) {
    if(a>b) return a;
    return b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n, m, k; cin>>n>>m>>k;
        vector<string> grid(n);
        for(ll i=0; i<n; i++) cin>>grid[i];
        ll total_gold = 0;
        vector<vector<ll>> gold(n, vector<ll> (m, 0));
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<m; j++) {
                if(i>0 && j>0) gold[i][j] = gold[i][j-1] + gold[i-1][j] - gold[i-1][j-1];
                else if(i > 0) gold[i][j] = gold[i-1][j];
                else if(j > 0) gold[i][j] = gold[i][j-1];
                if(grid[i][j] == 'g') {
                    total_gold++;
                    gold[i][j] += 1;
                }
               
            }
        }
        ll ans = 0;
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<m; j++) {
                if(grid[i][j] != '.') continue;
                ll a, b, c, d;
                a = gold[min(n-1, i+k-1)][min(m-1, j+k-1)];
                b = 0;
                if(i - k >= 0) b = gold[i-k][min(m-1, j+k-1)];
                c = 0;
                if(j - k >= 0) c = gold[min(n-1, i+k-1)][j-k];
                d = 0;
                if(j - k>= 0 && i-k >=0) d = gold[i-k][j-k]; 
                ll sum = a + d - b - c;
                ans = max(ans, total_gold  - sum);
                // cout<<i<<" "<<j<<" : "<<sum<<endl;
            }
        }
        cout<< ans <<endl;
    }
}