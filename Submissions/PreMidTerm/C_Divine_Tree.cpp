#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void solve() {
    ll n, m;
    cin>>n>>m;
    vector<ll> ans(n, 1);
    ll sum = n;
    ll j = 0;
    for(ll i =0; i<n; i++) {
        if(sum < m) {
            ans[i] = min(n-i, m - sum+1);
            sum += (ans[i] - 1);
        }
        else {
            j = i;
            break;
        }
    }
    if(sum != m) {
        cout<<"-1\n"; 
        return;
    }
    cout<<ans[0]<<endl;
    vector<bool> done(n+1, false);
    for(ll i=0; i<=j; i++) {
        if(i>0) cout<<ans[i-1]<<" "<<ans[i]<<endl;
        done[ans[i]] = true;
    }
    for(ll i=1; i<=n; i++) {
        if(!done[i]) cout<<"1 "<<i<<endl;
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        solve();
    }
}