#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll x, y; cin>>x>>y;

        if(x == y) {
            cout<<"-1"<<endl;
            continue;
        }
        else {
            if(x > y) {
                swap(x, y);
            }
            ll z = 0;
            ll tmp = y;
            while(tmp) {
                z++;
                tmp/=2;
            }
            unsigned long long k = (1<<z) - y;
            cout<<k<<endl;
        }

    }
}