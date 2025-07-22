#include<iostream>
#include<algorithm>
#define ll unsigned long long
using namespace std;

int main() {
    ll t; 
    cin>>t;
    while(t--) {
        ll n; 
        cin>>n;
        ll a[n];
        ll total=0;
        for(ll i=0; i<n; i++) {cin>>a[i]; total+=a[i];}
        sort(a, a+n);
        ll count = 0;
        ll sum=0;
        for(ll i=(n-1); i>=0; i--) {
            sum+=a[i];
            count++;
            if(sum > total/2) break;
        }
        cout<<count<<endl;
    }
}