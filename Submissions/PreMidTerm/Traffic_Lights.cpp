#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#define ll long long
using namespace std;

int main() {
    cin.tie(0);
    ll x, n;
    cin>>x>>n;
    set<ll> lights{0, x};
    set<ll> dist{x};
    for(int i=0; i<n; i++) {
        ll p; cin>>p;
        auto index = upper_bound(lights.begin(), lights.end(), p);
        index--;
        lights.insert(index, p);
        ll dis = dist[index - 1];
        ll d1 = p - lights[index - 1];
        ll d2 = dis - d1; 
        dist[index - 1] = d1;
        dist.insert(index, d2);
        for(auto z : dist) cout<<z<<" ";
        cout<<endl;
    }
}