#include<iostream>
#include<cmath>
#define ll unsigned long long
using namespace std;

int main() {
    ll x;
    cin>>x;
    ll count = 0;
    ll i = 1;
    for(; i<=x; i*=2) {
        count +=  pow(2, i-1);
    }
    cout<<count<<endl;
}