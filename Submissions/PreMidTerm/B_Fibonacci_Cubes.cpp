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
    
    vector<ll> fibo(13);
    for(ll i=0; i<=12; i++) {
        if(i<2) fibo[i] = 1;
        else fibo[i] = fibo[i-1]+fibo[i-2];
    }
    while(t--) {
        ll n, m; cin>>n>>m;
        ll fn1 = fibo[n-1];
        ll fn = fibo[n];
        ll fnn = fibo[n+1];
        while(m--) {
            ll w, l, h;
            cin>>w>>l>>h;
            if(w>=fn && l>=fn && h>=fn) {
                if(w>=fnn || l>=fnn || h>=fnn) cout<<"1";
                else cout<<"0";
            }
            else cout<<"0";
        }
        cout<<endl;
    }
}