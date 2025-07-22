#include<iostream>
#include<vector>

#define ll long long
using namespace std;

int main() {
    ll t; 
    cin>>t;
    while(t--) {
        ll n; 
        cin>>n;
        vector<ll> a;
        ll z = 0;
        for(int i=0; i<n; i++) {
            ll x; 
            cin>>x;
            if(x != z ) a.push_back(x);
            z = x;
        }
        vector<ll> b;
        b.push_back(a[0]);
        for(ll j=1; j<a.size(); j++) {
            if(a[j]-a[j-1] == 1) {
                if(j<(a.size() - 1)) b.push_back(a[j+1]);
                j++;
            }
            else b.push_back(a[j]);
        }
        cout<<b.size()<<endl;
    }
}