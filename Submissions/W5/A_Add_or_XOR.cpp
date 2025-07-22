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
        int a, b, x, y; cin>>a>>b>>x>>y;
        if(a%2==1 && a==(b+1)) cout<<y<<endl;
        else if(a > b) cout<<"-1"<<endl;
        else if(a == b) cout<<"0"<<endl;
        else {
            if(x<=y) {
                cout<<((b-a)*x)<<endl;
            }
            else {
                int eo = (b - a + 1 - a%2)/2 ;
                int oe = b - a - eo ;
                cout<<((eo)*y + (oe)*x)<<endl;
            }
        }
        
    }
}