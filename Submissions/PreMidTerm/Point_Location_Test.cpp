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
        ll x1, y1, x2, y2, x3, y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        ll y21 = y2 - y1;
        ll x21 = x2 - x1;
        ll y31 = y3 - y1;
        ll x31 = x3 - x1;
        if(x31 * y21 == x21 * y31) cout<<"TOUCH"<<endl;
        else if(x31 * y21 > x21 * y31) cout<<"LEFT"<<endl;
        else cout<<"RIGHT"<<endl;
    }
}