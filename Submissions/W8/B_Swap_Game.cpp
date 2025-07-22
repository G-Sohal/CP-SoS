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
        vector<ll> a(n, 0);
        ll minm = 1e9 + 1;
        for(int j=0; j<n; j++) {cin>>a[j]; minm = min(minm, a[j]);}

        if(a[0] > minm) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}