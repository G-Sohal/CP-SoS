#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

ll median(ll a, ll b, ll c, ll d) { 
    vector<ll> q = {a, b, c, d};
    sort(q.begin(), q.end());
    return (q[2] + q[3] - q[1] - q[0]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n, m;
        cin>>n>>m;
        vector<vector<ll>> a;
        for(ll i=0; i<n; i++) {
            vector<ll> z(m, 0);
            for(ll j=0; j<m; j++) {
                cin>>z[j];
            }
            a.push_back(z);
        }
        ll op = 0;
        for(ll i=0; i<(n+1)/2; i++) {
            for(ll j=0; j<(m+1)/2; j++) {
                if(2*j == (m-1) && (2*i != (n-1))) op+=abs(a[i][j] - a[n-1-i][j]);
                else if(2*j != (m-1) && (2*i == (n-1))) op+=abs(a[i][j] - a[i][m-1-j]);
                else {
                    op += median(a[i][j], a[i][m-1-j], a[n-1-i][j], a[n-1-i][m-1-j]);
                }
            }
        }
        cout<<op<<endl;
    }
}