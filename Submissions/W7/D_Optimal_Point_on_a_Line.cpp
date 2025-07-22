#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;
ll absolute(ll a) {
    if(a < 0) return a*-1;
    return a;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vector<ll> x(n, 0);
    // ll sum = 0;
    for(int i=0; i<n; i++) { 
        cin>>x[i];
    }
    sort(x.begin(), x.end());
    cout<<x[((n-1)/2)];
}