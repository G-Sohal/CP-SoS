#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll sq(ll n) {
    ll i =1;
    while(i*i <= n) i++;
    return (i-1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll MODN = 1e9 + 7;
    ll n; cin>>n;
    ll sum = 0;
    for(ll i=1; i<=n; i++) {
        for(ll j=i; j<=n; j+=i) {
            sum += i%MODN;
        }
    }
    cout<<sum<<endl;
}