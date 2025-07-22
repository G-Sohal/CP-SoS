#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        string x; cin>>x;
        int n = x.length();
        int ans = 10;
        for(int i=0; i<n; i++) ans = min(ans, x[i] - '0');
        cout<<ans<<endl;
    }
}