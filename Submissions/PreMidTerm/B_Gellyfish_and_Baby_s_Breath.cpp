#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll MOD = 998244353;
    ll MAXN = 100000;

    vector<ll> pow2(MAXN);
    pow2[0] = 1;
    for (ll i = 1; i<MAXN; i++) {
        pow2[i] = (pow2[i-1]*2) % MOD;
    }
    
    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        vector<ll> p(n), q(n);
        vector<pair<ll, ll>> p_loc(n), q_loc(n); // pair of max value till that index and at what index
        
        ll max_p = -1;
        ll max_q = -1;
        for(ll j=0; j<n; j++) {
            cin>>p[j];
            if(p[j] > max_p) {
                p_loc[j] = {p[j], j};
                max_p = p[j];
            }
            else {
                p_loc[j] = p_loc[j-1];
            }
        }
        for(ll j=0; j<n; j++) {
            cin>>q[j];
            if(q[j] > max_q) {
                q_loc[j] = {q[j], j};
                max_q = q[j];
            }
            else {
                q_loc[j] = q_loc[j-1];
            }
        }
        
        for(ll j=0; j<n; j++) {
            auto p_pair = p_loc[j];
            auto q_pair = q_loc[j];
            max_p = p_pair.first;
            ll ind_p = p_pair.second;
            max_q = q_pair.first;
            ll ind_q = q_pair.second;
            if(max_p > max_q) {
                cout<<(pow2[max_p] + pow2[q[j-ind_p]])%MOD<<" ";
            }
            else if(max_q > max_p) {
                cout<<(pow2[max_q] + pow2[p[j-ind_q]])%MOD<<" ";
            }
            else {
                ll z = max(q[j-ind_p],p[j-ind_q]);
                cout<<(pow2[max_p] + pow2[z])%MOD<<" ";
            }
        }
        cout<<endl;
    }
}