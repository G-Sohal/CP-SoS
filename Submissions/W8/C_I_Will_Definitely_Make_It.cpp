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
        k--;
        vector<int> h(n, 0);
        for(int i=0; i<n; i++) cin>>h[i];
        int this_ht = h[k];
        int lvl = 0;
        bool done = true;
        sort(h.begin(), h.end());
        for(int j=0; j<(n-1) && done; j++) {
            if(h[j] < this_ht) continue;
            else {
                if(lvl + h[j+1] - h[j] > h[j]) done=false;
                lvl += h[j+1] - h[j];
            }
        }       
        if(done) cout<<"YES\n";
        else cout<<"NO\n"; 
    }
}