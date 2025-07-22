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
        ll n, k; 
        cin>>n>>k;
        
        vector<ll> a(n);
        bool possible = true;
        set<ll> s;
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            s.insert(a[i]);
            if(s.size() > k) possible=false;
        }
        
        if(!possible) {
            cout<<"-1\n";
        }
        else {
            cout<<n*k<<endl;
            for(ll i=0; i<n; i++) {
                for(ll z : s) cout<<z<<" ";
                ll q = k - s.size();
                for(ll j=0; j<q; j++) cout<<"1 ";
            }
            cout<<endl;
        }
    }
}