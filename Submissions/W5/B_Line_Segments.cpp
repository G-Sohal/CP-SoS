#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

ll max(ll a, ll b){
    if(a>b) return a;
    return b;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        ll px, py, qx, qy; 
        cin>>px>>py>>qx>>qy;
        double distsq = ((px - qx)*(px - qx) + (py - qy)*(py - qy));
        ll sum = 0; ll m=0;
        for(ll i=0; i<n; i++) {
            ll a; cin>>a;
            sum+=a;
            m=max(a, m);
        }
        ll summin = max(0, 2*m - sum);
        if(sum*sum >= distsq && distsq >= summin*summin) {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}