#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a*b)/gcd(a, b);
}

bool solve() {
    int n; cin>>n;
    vector<ll> p(n, 0), s(n, 0);
    for(int i=0; i<n; i++) cin>>p[i];
    for(int i=0; i<n; i++) cin>>s[i];
    for(int i=0; i<(n-1); i++){
        if(p[i]%p[i+1] !=0) return false; 
        if(s[i+1]%s[i] !=0) return false;
    }
    vector<ll> a(n);
    for(int i=0; i<n; i++) a[i]=lcm(p[i], s[i]);
    for(int i=0; i<n; i++){
        if(i==0) {
            if(a[i] != p[i]) return false;
        }
        else if(gcd(p[i-1], a[i]) != p[i]) return false;
    }
    for(int i=(n-1); i>=0; i--){
        if(i==(n-1)) {
            if(a[i] != s[i]) return false;
        }
        else if(gcd(s[i+1], a[i]) != s[i]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        if(solve()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}