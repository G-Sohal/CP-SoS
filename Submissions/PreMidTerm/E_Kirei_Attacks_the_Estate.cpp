#include<iostream>
#include<vector>
#define ll unsigned long long
using namespace std;

ll minn(ll a, ll b) {
    if(a<b) return a;
    return b;
}

int main() {
    ll t; 
    cin>>t;
    while(t--) {
        ll n; 
        cin>>n;
        ll danger;
        ll prev_min = 0;
        ll prev_max = 0;
        for(ll i=0; i<n; i++) {
            cin>>danger;
            cout<<(danger - prev_min)<<" ";
            prev_min = minn(0, danger - prev_max);
            prev_max = (danger - prev_min);
        }
        cout<<endl;
    }
}