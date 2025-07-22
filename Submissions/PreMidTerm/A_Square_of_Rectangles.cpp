#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll l1, b1, l2, b2, l3, b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
        if(l1 == l2 && l3 == l1 && (b1 + b2 + b3)==l1) cout<<"YES"<<endl;
        else if(b1 == b2 && b3 == b1 && b3==(l1+l2+l3)) cout<<"YES"<<endl;
        else if(l1 == (l2 + l3) && b2==b3 && l1==(b1+b2)) cout<<"YES"<<endl;
        else if(b1==(b2+b3) && l2==l3 && (l1+l2)==b1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}