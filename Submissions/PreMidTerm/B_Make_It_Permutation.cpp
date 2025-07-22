#include <iostream>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        cout<<2*(n)-3<<endl;
        for(ll i=1; i<=n; i++) {
            if(i>1)cout<<i<<" "<<1<<" "<<i<<endl;
            if(i<(n-1))cout<<i<<" "<<i+1<<" "<<n<<endl;
        }
    }
}