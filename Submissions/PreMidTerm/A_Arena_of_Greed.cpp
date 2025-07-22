#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

ll ans(ll n) {
    if(n == 0) return 0;
    else if(n==2) return 1;
    else if(n==4) return 3;
    else if(n==8) return 5;
    else if(n%4 == 0) {
        return (1 + ans(n-2));
    }
    else {
        return (n/2 + ans((n/2) - 1));
    }
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        // if n is even do #1 unless #2 reduces it to odd
        // if (n = 2 mod4) do #2
        // else do #1
        // if odd: n - ansfrom1(n-1)
        
        if(n%2 == 0) {
            cout<< ans(n) <<endl;
        }
        else {
            cout<< n - ans(n-1) <<endl;
        }
    }
}