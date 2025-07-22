#include <iostream>
#define ll long long
using namespace std;
ll minn(ll a, ll c) {
    if(a<c) return a;
    return c;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll a, b, c, d;
        cin>>a>>b>>c>>d;
        // a c 
        // b d
        if(c>=d && a>=d) cout<<"Gellyfish"<<endl;
        else if(c>=d && a<d) {
            if(b<=a) cout<<"Gellyfish"<<endl;
            else cout<<"Flower"<<endl;
        }
        else if(c<d && a>=d) {
            if(b<=c) cout<<"Gellyfish"<<endl;
            else cout<<"Flower"<<endl;
        }
        else {
            if(b<=minn(a, c)) cout<<"Gellyfish"<<endl;
            else cout<<"Flower"<<endl;
        }
    }
}