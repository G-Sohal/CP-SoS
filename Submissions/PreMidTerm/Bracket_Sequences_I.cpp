#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;
ll MODN = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin>>n;
    if(n%2 == 1) cout<<"0"<<endl;
    else 
    {
        n/=2;
        ll res = 1;
        for(ll i=(n+2); i<=2*n; i++) res = (res*i)%MODN;
        ll den = 1;
        for(ll i=2; i<=n; i++) den = (den*i)%MODN;
        ll exp = MODN - 2;
        ll den_inv = 1;
        while(exp) {
            if(exp%2 == 1) den_inv = (den_inv * den)%MODN;
            den = (den*den)%MODN;
            exp/=2;
        }
        cout<< res * den_inv %MODN <<endl;
    }
    
}