#include <iostream>
#include <vector>
#include <set>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll END = 1e15;
    ll t; cin>>t;
    while(t--) {
        ll n, k;
        cin>>n>>k;
        vector<ll> p(n);
        
        set<ll> s;
        for(ll i=0; i<n; i++) {cin>>p[i]; s.insert(p[i]);}
        vector<ll> d(p[n-1]+1, k+1);
        for(ll i=0; i<n; i++) cin>>d[p[i]];
        ll q; cin>>q;
        while(q--) {
            ll a; cin>>a;
            a--; 
            ll a_copy = a;
            ll dir = 1;
            ll time = 0;
            // ll index = a;
            while(a>=0 && a<=END) {
                if(s.count(a)  && (time%k == d[a])) dir*=(-1);
                a += dir;
                time++;
                time%=k;
                if(time == 0 && a == a_copy) break;
            }
            if(a<0 || a>=n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}