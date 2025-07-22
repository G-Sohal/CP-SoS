#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

#define ll long long
using namespace std;

int main() {
    ll n; cin>>n;
    ll total = 0;
    vector<ll> x(n);
    for(ll i=0; i<n; i++) {
        cin>>x[i];
        total+=x[i];
    }
    sort(x.begin(), x.end());
    
    ll sum = 0;
    for(ll y : x) {
        if(y > sum + 1) break;
        sum+=y;
    }
    cout<<sum+1;
}