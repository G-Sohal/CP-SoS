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
        int n, m; cin>>n>>m;
        vector<int> a(n-1);
        vector<pair<int, int>> b(n);
        for(int i=0; i<(n-1); i++) cin>>a[i];
        for(int i=0; i<n; i++) {
            int c; cin>>c;
            b[i] = {c, c};
        }
        
        for(int i=0; i<(n-1); i++) {
            for(int j=b[i].first; j<b[i].second; j++) {
                
            }
        }
    }
}