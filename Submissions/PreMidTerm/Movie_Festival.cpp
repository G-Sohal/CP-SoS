#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define ll long long
using namespace std;

int main() {
    ll n; cin>>n;
    
    vector<pair<ll, int>> times;
    
    ll a, b;
    for(ll i = 0; i<n; i++) {
        cin>>a>>b;
        times.push_back({b, a});
    }
    
    sort(times.begin(), times.end());

    ll count = 0;
    ll limit = 0;
    for(auto x: times) {
        if(x.second >= limit) {
            count++;
            limit = x.first;
        }
    }
    cout<<count<<endl;
}