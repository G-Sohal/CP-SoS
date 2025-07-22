#include<iostream>
#include<vector>

#define ll long long
using namespace std;

int main() {
    ll n; cin>>n;
    vector<ll> x(n);
    for(ll i=0; i<n; i++) {
        cin>>x[i];
    }
    ll max_sum = -1e9;
    ll count = -1e9;
    for(ll i=0; i<n; i++) {
        count = max(x[i], count+x[i]);
        max_sum = max(max_sum, count);
    }
    cout<<max_sum<<endl;
}