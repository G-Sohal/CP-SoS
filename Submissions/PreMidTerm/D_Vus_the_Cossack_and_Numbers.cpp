#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin>>n;
    vector<int> a(n);
    vector<bool> c(n, false);
    ll sum = 0;
    for(ll i=0; i<n; i++) {
        float p; cin>>p;
        a[i] = floor(p);
        if(a[i] == p) c[i]=true;
        sum+=a[i];
    }
    // for(int x : a) cout<<x<<endl;
    // cout<<sum<<endl;
    for(ll i=0; i<n && sum!=0; i++) {
        if(sum<0 && !c[i]) {a[i]++; sum++;}
    }
    for(int x : a) cout<<x<<endl;
    // ll t; cin>>t;
    // while(t--) {}
}