#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll bt(ll a, vector<ll> &op, ll m) {
    ll cnt=0;
    ll i=0;
    while(a>=0 && i<=m) {
        i++;
        if(a%2==1) cnt++;
        else op.push_back(1<<(i-1));
        a/=2;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n, k;
        cin>>n>>k;
        vector<ll> a(n);
        ll beauty=0;
        vector<ll> op;
        for(ll i=0; i<n; i++) {cin>>a[i]; }
        ll m = 29;
        for(ll i=0; i<n; i++) beauty+=bt(a[i], op, m);
        sort(op.begin(), op.end());
        ll i=0;
        // for(auto z: op) cout<<z<<" ";
        // cout<<endl;
        for(auto z: op) {
            i+=z;
            if(i>k) break;
            beauty++;
        }
        if(i<k) {
            ll q = 1<<(m+1);
            ll tmp = q;
            q+=i;
            while(q<=k) {
                // cout<<q<<" ";
                beauty++;
                // cout<<beauty<<endl;
                tmp*=2;
                
                q+=tmp;
            }
        }
        cout<<beauty<<endl;
    }
}