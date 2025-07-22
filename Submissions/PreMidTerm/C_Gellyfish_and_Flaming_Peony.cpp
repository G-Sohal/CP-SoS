#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll MAXN=5000;
    ll INF=1e9;
    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        vector<ll> a(n);
        ll GCD;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            if(i==0) GCD=a[0];
            else GCD=gcd(GCD, a[i]);
        }
        ll count=0;
        for(ll x: a) if(x==GCD) count++;
        if(count) {
            cout<<n-count<<endl;
        }
        else {
            vector<ll> subset_size(MAXN+1, INF); 
            // subset[i] = x; x is size of the smallest subset jihda gcd = i;
            for(ll x: a) subset_size[x]=1;

            for(ll x: a) {
                for(ll y=0; y<=MAXN; y++) {
                    if(subset_size[y] == INF) continue;
                    else {
                        ll g = gcd(x, y);
                        subset_size[g] = min(subset_size[g], subset_size[y]+1);
                    }
                }
            }
            ll m = subset_size[GCD];
            cout<<n + m - 2<<endl;
        }
    }
}