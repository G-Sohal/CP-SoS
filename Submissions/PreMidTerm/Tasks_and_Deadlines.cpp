#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin>>n;
    ll ans = 0;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) {
        cin>>a[i];
        ll d; cin>>d;
        ans+=d;
    }
    sort(a.begin(), a.end());
    ll v = 0;
    for(ll i=0; i<n; i++) {
        v+=a[i];
        ans-=v;
    }
    cout<<ans;
}