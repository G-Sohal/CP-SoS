#include<iostream>
#include<unordered_map>

#define ll long long
using namespace std;

int main() {
    ll n, x; 
    cin>>n>>x;
    unordered_map<ll, ll> a;
    unordered_map<ll, ll> b;
    ll z;
    bool done = false;
    for(ll i = 0; i<n && !done; i++) {
        cin>>z;
        if(b.count(z)) {
                cout<<(b[z] + 1)<<" "<<i+1;
                done = true;
            }
        a.insert({z, i});
        b.insert({x- z, i});
    }
    if(!done) cout<<"IMPOSSIBLE";
}