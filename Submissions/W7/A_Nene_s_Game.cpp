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
        int k, q; cin>>k>>q;
        vector<int> a(k, 0);
        for(int i=0; i<k; i++) cin>>a[i];
        for(int i=0; i<q; i++) {
            int n; cin>>n;
            cout<<min(n, a[0] - 1)<<" ";
        }
        cout<<endl;
    }
}