#include <iostream>

#define ll long long
using namespace std;
int min(int a, int b) {
    if(a<b) return a;
    return b;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int a, b; cin>>a>>b;
        int x = (a+b)/4;
        cout<<min(x, min(a, b))<<endl;
    }
}