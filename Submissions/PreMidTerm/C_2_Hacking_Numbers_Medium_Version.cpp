#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        ll x;
        cout<<"digit"<<endl; // 1) 1 .. 81
        cin>>x;
        cout<<"mul 99"<<endl;
        cin>>x;
        cout<<"digit"<<endl;
        cin>>x;
        cout<<"add "<<n-18<<endl;
        cin>>x;
        cout<<"!"<<endl;
        cin>>x;
    }
}