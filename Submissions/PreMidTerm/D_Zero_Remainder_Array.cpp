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
        vector<ll> a;
        for(ll i=0; i<n; i++) {
            ll b;
            cin>>b;
            b = k - b%k;
            if(b != k) a.push_back(b);
        }
        if(a.size() == 0) {
            cout<<0<<endl;
            continue;
        }
        sort(a.begin(), a.end());
        ll count = 1;
        ll max_count = 1;
        ll value = a[0];
        for(ll i = 1; i<a.size(); i++) {
            if(a[i] != a[i-1]) {
                count=1;
            }
            else count++;
            if(count >= max_count) {
                max_count = count;
                value = a[i];
            }
        }
        cout<<max_count<<" : "<<k<<" : "<<value<<endl;
        cout<<k*(max_count - 1) + value+1<<endl;
    }
}