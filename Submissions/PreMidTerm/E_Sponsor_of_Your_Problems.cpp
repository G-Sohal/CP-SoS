#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin>>t;
    while(t--) {
        ll l, r; cin>>l>>r;
        string L = to_string(l), R = to_string(r);
        ll ans = 0;
        bool start = false;
        for(ll i=0; i<L.size(); i++) {
            if(start) {
                if(L[i] == '9' && R[i] == '0') ans+=1;
                else break;
            }
            else if(L[i] == R[i]) ans+=2;
            else if(L[i] <= R[i] - 2) break;
            else if(L[i] == R[i] - 1) {
                ans += 1;
                start = true;
            }
        }
        cout<<ans<<endl;
    }

}