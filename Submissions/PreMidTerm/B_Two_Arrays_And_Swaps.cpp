#include<iostream>
#include<vector>
#include<algorithm>
#define ll unsigned long long
using namespace std;

int main() {
    ll t; 
    cin>>t;
    while(t--) {
        ll n, k; 
        cin>>n>>k;
        vector<ll> a(n);
        vector<ll> b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(k > n) k=n;
        ll sum = 0;
        ll swaps = 0;
        for(int i=0; i<n; i++) {
            if(a[i] > b[n-1-i] || swaps>=k) {
                sum+=a[i];
            }
            else {
                sum+=b[n-1-i];
                swaps++;
            }
        }
        cout<<sum<<endl;
    }
}