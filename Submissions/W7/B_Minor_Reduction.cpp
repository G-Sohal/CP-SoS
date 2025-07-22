#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        string s; cin>>s;
        vector<int> v;
        int x;
        for(int i=0; i<s.length(); i++) v.push_back(s[i] - '0');
        if(v.size() == 1){
            cout<<v[0]<<endl;
            continue;
        }
        reverse(v.begin(), v.end());
        int i = 0;
        bool done = false;
        for(; i<(v.size()-1); i++) {
            if((v[i] + v[i+1])>9) {done = true; break;}
        }
        if(done) {
            for(int j=(v.size()-1); j>=0; j--) {
                if(j == (i+1)) cout<<(v[j] + v[j-1]);
                else if(j==i) continue;
                else cout<<v[j];
            }
        }
        else {
            cout<<v[v.size() - 1] + v[v.size()-2];
            for(int j=(v.size()-3); j>=0; j--) cout<<v[j];
        }
        cout<<endl;
    }
}