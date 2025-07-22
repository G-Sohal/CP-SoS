#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, q;
    cin>>n>>q;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    sort(a.rbegin(), a.rend());
    
    vector<ll> entry_exit(n, 0);
    for(ll i=0; i<q; i++) {
        ll l, r;
        cin>>l>>r;
        l--; r--;
        entry_exit[l] += 1;
        if(r+1 < n) entry_exit[r+1] -= 1; // ERR : NOT [r]
    }
    vector<ll> v(n); //{#elements, #times_called}
    ll this_time = 0;
    for(ll i=0; i<n; i++) {
        this_time+=entry_exit[i];
        v[i] = this_time;
    }
    sort(v.rbegin(), v.rend());
    ll sum = 0;
    for(ll i=0; i<n; i++) sum+=v[i]*a[i];
    cout<<sum<<endl;
    // ll t; cin>>t;
    // while(t--) {}
}