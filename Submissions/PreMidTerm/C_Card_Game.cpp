#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a, b;
        for(ll i=0; i<n; i++) {
            char c; cin>>c;
            if(c == 'A') a.push_back(i+1);
            else b.push_back(i+1);
        }
        ll an = a.size();
        ll bn = b.size();
        if(a[0]==1 && a[an-1]==n) cout<<"Alice\n";
        else if(b[0]==1 && b[bn-1]==n) cout<<"Bob\n";
        else if(a[0]==1) {
            if(bn == 1) cout<<"Alice\n";
            else cout<<"Bob\n";

        }
        else {
            if(an == 1) cout<<"Bob\n";
            else if(a[an-2] == (n-1)) cout<<"Alice\n";
            else cout<<"Bob\n";
        }
    }
}
