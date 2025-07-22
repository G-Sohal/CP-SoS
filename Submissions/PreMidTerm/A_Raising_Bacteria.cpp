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

    // ll t; cin>>t;
    // while(t--) {}
    ll x; cin>>x;
    ll ans = 0;
    while(x) {
        if(x%2 == 1 ) ans++;
        x/=2;
    }
    cout<<ans<<endl;
}