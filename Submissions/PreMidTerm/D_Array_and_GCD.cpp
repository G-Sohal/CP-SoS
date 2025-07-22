#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        ll count = 0;
        //2 3 5 7
        sort(a.begin(), a.end());
        ll j=0;
        for(ll i=0; i<n; i++) {
            // cout<<a[i]<<" : "<<primes[j]<<endl;
            if(a[i] >= primes[j]) j++;
            else count++;
        }
        cout<<count<<endl;
    }
}
