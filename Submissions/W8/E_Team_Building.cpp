#include <iostream>
#include <vector>
#include <iomanip>
#define ll long long
using namespace std;

ll max(ll a, ll b) {
    if(a > b) return a;
    return b;
}

// bitmask DP
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, p, k; cin>>n>>p>>k;
    vector<ll> a(n, 0);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<vector<ll>> st(n, vector<ll>(p, 0));
    for(int i=0; i<n; i++) {
        for(int j=0; j<p; j++) cin>>st[i][j];
    }

    // dp[P][K] maximise ensuring |P| = p; |K| = k; P&K = 0
    // first maximise playing[P] given P over various positions
    // playing(P, d) = max(playing(P, d-1) + max(over all x belonging to P)(playing(P\x, d-1) + a[x][d]))

    // vector<vector<int>> playing((1<<n), vector<int>(n, 0));
    vector<ll> playing((1<<n), 0);
    for(int S = 1; S < (1<<n); S++) {
        int d = __builtin_popcount(S);
        if(d > 1) continue;
        for(int i=0; i<n; i++) {
            if((1<<i) & S) playing[S] = st[i][0];
        }
    }
    for(ll S = 0; S < (1<<n); S++) {
        int d = __builtin_popcount(S);
        if(d == 1) {
            for(int i=0; i<n; i++) {
                if((1<<i) & S) playing[S] = (st[i][d-1]);
            }
        }
        else {
            for(int i=0; i<n; i++) {
                if((1<<i) & S) playing[S] = max(playing[S], playing[S ^ (1 << i)] + st[i][d-1]);
            }
        }
    }
    
    vector<ll> sitting((1<<n), 0);
    for(ll S=0; S<(1<<n); S++) {
        for(int i=0; i<n; i++) {
            if((1<<i) & S) {
                sitting[S] += a[i];
            }
        }
    }

    ll ans = 0;

    for(ll P=0; P<(1<<n); P++) {
        if(__builtin_popcount(P) == p) {
            for(ll K=0; K<(1<<n); K++) {
                if(__builtin_popcount(K) == k && (P & K)==0) {
                    ans = max(ans, playing[P] + sitting[K]);
                }
            }
        }
    }

    cout<<ans<<endl;
}