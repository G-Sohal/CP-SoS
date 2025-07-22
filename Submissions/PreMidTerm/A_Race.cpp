#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--) {
        int a, x, y;
        cin>>a>>x>>y;
        if(x > y) swap(x, y);
        if(a < x || a > y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}