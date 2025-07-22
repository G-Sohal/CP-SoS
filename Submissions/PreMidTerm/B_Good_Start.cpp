#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll w, h, a, b; cin>>w>>h>>a>>b;
        ll x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
        ll x = llabs(x1 - x2) - a;
        ll y = llabs(y1 - y2) - b;
        if(x <= 0) {
            if(y%b == 0 || x == 0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else if(y <= 0) {
            if(x%a == 0 || y == 0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else if(x%a == 0 || y%b == 0) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }

    }
}