#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;

int main() {
    ll n, x;
    cin>>n>>x;
    vector<ll> p(n);
    for(ll i = 0; i<n; i++) cin>>p[i];
    sort(p.begin(), p.end());
    // greedy and 2 pointers
    ll count = 0;
    ll i = 0; ll j = n - 1;
    while(i <= j) {
        if(i == j) {
            count++;
            break;
        }
        if((p[i] + p[j]) <= x) {
            count++;
            i++;
            j--;
        }
        else {
            count++;
            j--;
        }
    }
    cout<<count<<"\n";
}