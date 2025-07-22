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
        int n, m; cin>>n>>m;
        if(n == 1 || m==1) cout<<"NO\n";
        else if(n==2 && m==2) cout<<"NO\n";
        else cout<<"YES\n";
    }
}