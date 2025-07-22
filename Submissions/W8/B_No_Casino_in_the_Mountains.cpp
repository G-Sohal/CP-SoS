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
        vector<int> a(n, 0);
        for(int i=0; i<n; i++) cin>>a[i];
        int i=0;
        int ans=0;
        int cnt = 0;
        while(i<n) {
            if(a[i] == 0) cnt++;
            else cnt=0;
            if(cnt == k) {
                cnt = 0;
                ans++;
                i++;
            }
            i++;
        }
        cout<<ans<<endl;
        
    }
}