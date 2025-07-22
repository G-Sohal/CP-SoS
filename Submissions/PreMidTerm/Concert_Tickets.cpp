#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#define ll long long
using namespace std;

int main() {
    ll n, m; cin>>n>>m;
    vector<ll> h(n);
    
    vector<bool> used(n, false);
    sort(h.begin(), h.end());

    unordered_map<int, bool> ;
    for(int i = 0; i<n; i++) cin>>h[i];

    ll t;
    for(ll i = 0; i<m; i++) {
        cin>>t;
        bool done = false;
        for(ll j = h.size() - 1; j>=0; j--) {
            if(h[j] <= t && !used[j]) {
                cout<<h[j]<<"\n";
                done = true;
                used[j] = true;
                break;
            }
        }
        if(!done) cout<<"-1\n";
    }
}