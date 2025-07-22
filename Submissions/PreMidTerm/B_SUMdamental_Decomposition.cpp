#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n, x; cin>>n>>x;
        if(x == 0) {
            if(n==1) cout<<"-1"<<endl;
            else if(n%2 == 0) cout<<n<<endl;
            else cout<<(n+3)<<endl;
            continue;
        }
        if(x == 1) {
            if(n%2 == 1) {
                cout<<n<<endl;
            }
            else {
                cout<<(n+3)<<endl;
            }
            continue;
        }
        ll n1 = 0; // bits of x set to 1
        ll y = x;
        while(y) {
            if(y%2 == 1) n1 ++;
            y /= 2;
        }
        ll n2 = n - n1;
        if(n2 <=0 ) {cout<<x<<endl; continue;}
        if(n2 % 2 == 0) cout<<(n2 + x)<<endl;
        else {
            cout<<(n2 + x + 1)<<endl;
        }
    }
}