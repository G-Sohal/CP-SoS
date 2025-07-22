#include<iostream>
#include<vector>
#define ll unsigned long long
using namespace std;

int main() {
    ll n; cin>>n;
    vector<ll> v(n);
    vector<ll> prefix(n);
    for(ll i=0; i<n; i++) {
        cin>>v[i];
        if(i == 0 ) prefix[i] = v[i];
        else prefix[i] = prefix[i-1]^v[i];
    }
    while
    ll max_sum=v[0];
    for(ll i=0; i<n; i++) {
        ll sum = v[i];
        for(ll j=(i+1); j<n; j++) {
            sum ^= v[j];
            max_sum = max(max_sum, sum);
        }
    }
    cout<<max_sum<<endl;
}