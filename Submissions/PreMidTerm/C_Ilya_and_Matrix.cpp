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
    // while(t--) {
    ll m; cin>>m;
    ll n=0;
    ll tmp = 1;
    while(tmp < m) {
        tmp*=4;
        n++;
    }
    vector<ll> a(m);
    for(ll i=0; i<m; i++) cin>>a[i];
    sort(a.rbegin(), a.rend());
    ll sum = 0;
    ll ans = 0;
    ll comp = 1;
    for(ll i=1; i<=m; i++) {
        sum+=a[i-1];
        if(i == comp) {
            ans+=sum;
            comp*=4;
        }
    }
    // ll i=1;
    // ll j=n;
    // bool done = false;
    // if(j==0) done=true;
    // for(ll k=(m-1); k>=0 && !done; k--) {
    //     for(ll p=k; p>=(k+1-i) && !done; p--) {
    //         sum+=j*a[p];
    //         j--;
    //         if(j == 0) done = true;
    //     }
    //     ll tmp = 4*i;
    //     tmp-=i;
    //     i=tmp;
    // }
    cout<<ans<<endl;
    // }
}