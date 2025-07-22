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
        int n; cin>>n;
        vector<int> a(n, 0);
        for(int i=0; i<n; i++) cin>>a[i];
        vector<int> b(n, 0);
        int bmin = 1e6 + 1;
        for(int i=0; i<n; i++) {
            if(a[i] < bmin) b[i] = 1;
            bmin = min(bmin, a[i]);
        }
        int bmax = 0;
        for(int i=(n-1); i>=0; i--) {
            if(a[i] > bmax) b[i] = 1;
            bmax = max(bmax, a[i]);
        }
        for(int z : b) cout<<z;
        cout<<endl;
    }
}