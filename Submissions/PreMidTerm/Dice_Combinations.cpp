#include<iostream>
#include<vector>
#define ll unsigned long long
using namespace std;

int main() {
    ll n; 
    cin>>n;
    vector<ll> ways(n+1, 0);
    ways[0] = 1;
    for(ll i=1; i<=n; i++) {
        for(ll j=1; j<=6; j++) {
            if(i>=j) {
                ways[i] += ways[i-j];
                ways[i] %= 1000000007;
            }
        }
    }
    cout<<ways[n];
}