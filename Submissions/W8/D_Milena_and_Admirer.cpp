#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;
ll MAXN = 1e9;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> a(n, 0);
        for(int i=0; i<n; i++) cin>>a[i];
        ll cnt = 0;
        ll mins = MAXN;
        
        for (int i = n - 1; i >= 0; --i) {
            if (a[i] <= mins) {
                mins = a[i];
            } 
            else {
                ll k = (a[i] + mins - 1)/mins;
                cnt += (k - 1);
                mins = a[i] / k;
            }
        }
        
        cout<<cnt<<endl;
    }
}