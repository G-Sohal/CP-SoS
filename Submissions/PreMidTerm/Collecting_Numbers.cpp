#include<iostream>
#include<vector>

#define ll long long
using namespace std;

int main() {
    ll n; cin>>n;
    ll x[n];
    for(ll i = 0; i<n; i++) {
        ll y; cin>>y;
        x[y-1]=i;
    }
    ll count = 1;
    for(ll i = 1; i<n; i++) {
        if(x[i]<x[i-1]) count++;
    }
    cout<<count<<endl;
}