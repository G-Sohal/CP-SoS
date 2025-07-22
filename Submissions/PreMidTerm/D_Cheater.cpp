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
        ll n; cin>>n;
        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<n; i++) cin>>b[i];
        ll pts = 0;
        ll i = 0, j = 0;
        for(ll k = 0; k<n; k++) {
            if(a[i] > b[j]) {pts++; i--;}
            else j--;
        }
        

    }
}