#include<iostream>
#include<vector>
#include<algorithm>

#define ll long long
using namespace std;

int main() {
    ll n; cin>>n;
    vector<ll> x(n);
    for(ll i=0; i<n; i++) {
        cin>>x[i];
    }
    sort(x.begin(), x.end());
    ll median = x[n/2];
    ll cost = 0;
    for(ll i=0; i<n; i++) {
        cost += abs(x[i] - median);
    }
    cout<<cost<<endl;
}