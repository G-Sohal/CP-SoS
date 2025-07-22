#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

ll fact(ll x) {
    ll ans = x*(x-1)/2;
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

        ll n, m;
        cin>>n>>m;

        if(n%m == 0) {
            cout<<m*(fact(n/m))<<" ";
        }
        else {
            ll fl = (n/m);
            ll cl = fl+1;
            cout<<((cl*m - n)*fact(fl) + (n - fl*m)*fact(cl))<<" ";
        }
        cout<<fact(n-m+1)<<endl;
}
