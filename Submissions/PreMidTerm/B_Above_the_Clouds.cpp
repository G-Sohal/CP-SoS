#include <iostream>
#include <vector>
#include <set>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        vector<char> s(n);
        for(ll i=0; i<n; i++) cin>>s[i];
        set<char> v;
        bool done = false;
        for (int i = 0; i < n-1 && !done; ++i) {
            if(v.count(s[i])) done = true;
            v.insert(s[i]);
        }
        set<char> y;
        for (int i = 1; i < n && !done; ++i) {
            if(y.count(s[i])) done = true;
            y.insert(s[i]);
        }
        if(done) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}