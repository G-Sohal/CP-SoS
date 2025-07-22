#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;
ll INF = 1e9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll a, b, c;
        cin>>a>>b>>c;
        ll sum = (a + b + c);
        if(sum%3 == 0) {
            sum/=3;
            if(sum>=b && sum>=a) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
}