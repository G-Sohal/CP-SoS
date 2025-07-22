#include<iostream>
using namespace std;
int main() {
    long long t; cin>>t;
    while(t--) {
        long long y, x; cin>>y>>x;
        long long r = max(x, y);
        long long s = (r-1)*(r-1);
        long long ans;
        if(r%2 == 1) {
            ans = s + x;
            if(x == r) ans+= r - y;
        }
        else {
            ans = (s + y);
            if(y == r) ans+= r - x;
        }
        cout<<ans<<endl;
    }
}