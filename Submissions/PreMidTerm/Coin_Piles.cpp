#include<iostream>
#define ll long long

using namespace std;

ll MOD = 1e9 + 7;

int main() {
    ll t; cin>>t;
    while(t--) {
        ll a, b; cin>>a>>b;
        ll tmp = max(a, b);
        ll tmpp = min(a, b);
        a = tmpp; b = tmp;
        a = 2*a - b;
        b = a;
        
        if(a<0 || b<0) {cout<<"NO"<<endl; continue;}
        a %= 3;
        b %= 3;
        if(a == 0 && b == 0) cout<<"YES"<<endl;
        else if(a == 1 && b==2 ) cout<<"YES"<<endl;
        else if(a == 2 && b==1 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}