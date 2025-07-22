#include<iostream>
#include<set>
#include<vector>
#define ll long long
using namespace std;

ll max(ll a, ll b) {
    if(a>b) return a;
    return b;
}

int main() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }  
    set<ll> s;
    ll max_len = 0;
    ll index = 0;
    ll i;
    for(i=0; i<n; i++) {
        if(s.count(a[i])) {
            // clear set
            s.clear();
            // start with index +1
            i = index;
            index++;
        }
        else {
            s.insert(a[i]);
        }
        max_len = max(max_len, s.size());
    }
    cout<<max_len<<endl;
}