#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define ll long long
using namespace std;

int main() {
    ll n; cin>>n;
    
    vector<pair<ll, int>> times(n);
    
    ll a, b;
    for(ll i = 0; i<n; i++) {
        cin>>a>>b;
        start = min(start, a[i]);
        end = max(end, b[i]);
    }

    ll hrs = end - start + 1;
    vector<ll> present(hrs);
    
    for(ll i = 0; i<n; i++) {
        for(ll j = a[i]; j<=b[i]; j++) {
            present[j - start] += 1;
        }
    }
    ll max_count = 0;

    for(ll y: present) max_count = max(max_count, y);

    cout<<max_count<<endl;
}