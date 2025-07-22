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
        for(int s=1; s<18; s++) {
            ll sum=0, sumt=0;
            for(int i=0; i<n; i++) sum+=a[i];
            for(int i=0; i<n; i++) {
                sumt+=a[i];
            }
        }
        
    }
}