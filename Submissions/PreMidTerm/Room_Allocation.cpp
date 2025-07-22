#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
 
int main() {
    ll n;
    cin>>n;
    vector<pair<ll, ll>> times;
    for(ll j=0; j<2*n; j++) {
        ll x, y;
        cin>>x;
        cin>>y;
        times.push_back({x, 1});
        times.push_back({y, -1});
    }
    sort(times.begin(), times.end());
    ll count = 0;
    ll max_count = 0;
    vector<ll> room_no(n);
    vector<ll> free;
    for(auto t : times) {
        
    }
    cout<<max_count;
}