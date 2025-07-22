#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll IND = -1;
ll INF = 1e9;

void solve() {
    ll n, q;
        cin>>n>>q;
        vector<ll> b(n), x(n), y(n), z(n);
        for(ll i=0; i<n; i++) cin>>b[i];
        // vector<ll> a = b;
        for(ll i=0; i<n; i++) {
            cin>>x[i]>>y[i]>>z[i];
            x[i]--; y[i]--; z[i]--;
        }
        vector<bool> ran(n, false);
        for(ll i=(n-1); i>=0; i--) {
            if(x[i]==y[i]) {
                if(ran[x[i]]) {
                    b[x[i]] = b[z[i]];
                }
                else {
                    b[z[i]] = b[x[i]];
                }
            }
            else if(x[i] == z[i] || y[i] == z[i]) {
                if(x[i] == z[i]) {
                    if(b[y[i]] < b[z[i]]) {
                        if(b[y[i]] == IND) {
                            b[y[i]] = b[z[i]];
                        }
                        else {cout<<"-1\n";
                        return;}
                    }
                    // else remains same
                }
                if(y[i] == z[i]) {
                    if(b[x[i]] < b[z[i]]) {
                        cout<<"-1\n";
                        return;
                    }
                }
            }
            else { // all different
                if(b[z[i]] != min(b[x[i]], b[y[i]])) {
                    cout<<"-1\n";
                    return;
                }
                else {
                    b[z[i]] = IND;
                }
            }
        }
        for(ll q : b) cout<<q<<" ";
        cout<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t; cin>>t;
    while(t--) {
        solve();
    }
}