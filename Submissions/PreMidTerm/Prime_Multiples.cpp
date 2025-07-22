#include <iostream>
#include <vector>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin>>n;
    ll k; cin>>k;
    vector<ll> p(k);
    for(ll i=0; i<k; i++) cin>>p[i];
    ll final = (1<<k);
    ll cnt = 0;
    for(ll i=1; i<final; i++) {
        ll tmp = i;
        ll j = 0;
        ll z = 1;
        ll c = 0;
        while(tmp) {
            if(tmp%2 == 1) {
                if(z > (n/p[j])) {
                    z = n+1;
                    break;
                }
                z*=p[j];
                c++;
            }
            tmp/=2 ;
            j++ ;
        }
        if(c%2 == 1) cnt += (n/z) ;
        else cnt -= (n/z) ;
    }
    cout<<cnt<<endl;
}