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
        vector<int> freq(n+1, 0);
        for(int z : a) freq[z]++;
        int uniq = 0;
        for(int f : freq) if(f) uniq++;
        vector<int> ans(n+1, 0);
        for(int i=0; i<=n; i++) { // i as a potential candidate for mex(a modified)
            if(freq[i] == 0) {
                for(int j=(i-1); j<=n; j++) ans[j]++;
                break;
            }
            for(int j = freq[i]; j<=(n+1 - uniq); j++) ans[j]++;
        }
        for(int z : ans) cout<<z<<" ";
        cout<<endl;
        // vector<int> diff(n+2, 0);
        // for(int i=0; i<=n; i++) {
        //     if(i>0 && freq[i-1]==0) break;
        //     if(freq[i] <= (n-i)) {
        //         diff[freq[i]]++;
        //         diff[n-i+1]--;
        //     }
        // }
        // int z = 0;
        // for(int i=0; i<=n; i++) {
        //     z+=diff[i];
        //     cout<<z<<" ";
        // }
    }
}