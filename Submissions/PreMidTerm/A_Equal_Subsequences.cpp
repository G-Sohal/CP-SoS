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
        ll n, k; cin>>n>>k;
        for(ll i=0; i<n; i++) {
            if(i<k) cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
    }
}