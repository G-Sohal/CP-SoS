#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--){
        ll n, q;
        cin>>n>>q;
        vector<char> s(n);
        ll ac =0; ll bc = 0; ll cc = 0;
        for(ll i=0; i<n; i++) {
            cin>>s[i];
            if(s[i]=='a') ac++;
            else if(s[i]=='b') bc++;
            else cc++;
        }
        // a === leave as it is
        // b === b->a(P)
        //       b->c(V) && c->a(R)
        // c === c->a(R)
        //       c->b(T) && b->a(P)
        //       c->b(T)
        ll p=0; ll r=0; ll t=0; ll v=0;
        for(ll i=0; i<q; i++) {
            char x, y;
            cin>>x>>y;
            if(x == 'b') {
                if(y == 'a') p++;
                else if(y == 'c') v++;
            }
            if(x == 'c') {
                if(y == 'a') r++;
                else if(y == 'b') t++;
            }
        }
        for(char c : s) {
            if(c == 'a') cout<<c;
            else if(c == 'b') {
                if(p) {
                    cout<<"a";
                    p--;
                }
                else if(v>0 && r>0) {
                    cout<<"a";
                    v--; r--;
                }
                else {
                    cout<<"b";
                }
            }
            else {
                if(r) {
                    cout<<"a";
                    r--;
                }
                else if(p>0 && t>0) {
                    cout<<"a";
                    p--; t--;
                }
                else if(t) {
                    cout<<"b";
                    t--;
                }
                else {
                    cout<<"c";
                }
            }
        }
        cout<<endl;
    }
}
