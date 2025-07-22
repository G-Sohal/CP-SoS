#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        string s; cin>>s;
        bool done = false;
        int op = 0;
        int cl = 0;
        for(int i = 0; i<s.size() && !done; i++) {
            if(s[i] == ')') {
                cl++;
            }
            if(s[i] =='(') {
                op++;
            }
            if(op == cl && i < (s.size()-1)) done=true;
        }
        if(done) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}