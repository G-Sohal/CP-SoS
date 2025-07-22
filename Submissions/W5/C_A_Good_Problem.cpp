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
        ll n, l, r, k; cin>>n>>l>>r>>k;
        if(n==1) cout<<l<<endl;
        else if(n==2) cout<<"-1"<<endl;
        else if(n%2 == 1) cout<<l<<endl;
        else {
            ll zmax = 1;
            ll tmp = l;
            while(tmp) {
                tmp/=2;
                zmax*=2;
            }
            if(zmax <= r) {
                if(k > n-2) cout<<zmax<<endl;
                else cout<<l<<endl;
            }
            else cout<<"-1"<<endl;
        }
    }
}