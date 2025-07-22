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
        int n, j, k; cin>>n>>j>>k;
        vector<int> a(n, 0);
        int maxi = 0; 
        for(int i=0; i<n; i++) {cin>>a[i]; maxi=max(maxi, a[i]);}
        if(maxi == a[j-1]) {
            cout<<"YES"<<endl;
        }
        else {
            if(k>1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}