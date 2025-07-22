#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;
ll MODN = 1e9 + 7;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        string s; cin>>s;
        int n = s.length();
        vector<int> v(n+1, -1);
        vector<int> where_zero;
        for(int i=1; i<=n; i++) {
            if(s[i-1] == '1') v[i] = 1;
            else {v[i] = 0; where_zero.push_back(i);}
        }
        for(int l=1; l<=n; l++) {
            int ones = 0;
            int zeros = 0;
            for(int r=l; r<=n; r++) {
                if(v[r]) ones++;
                else zeros++;
                if(zeros < ones) continue;
                else if(zeros == ones) {
                    
                    zeros--;
                }
            }
        }
        vector<int> cntones(s.length()+1, 0), cntzero(s.length()+1, 0);
        for(int i=1; i<=s.length(); i++) {
            if(s[i] == '0') cntones[i] = cntones[i-1] + 1;
            else cntzero[i] = cntzero[i-1] + 1;
        }
        vector<int> v1(n, -1);
        vector<int> v2(n, -1);
        int index = -1;
        for(int i=0; i<n; i++) {
            if(s[i] == '0'){v1[i] = index + 1; index = i;}
        }
        for(int i=(n-2); i>=0; i--) {
            if(s[i] == '0') {v2[i] = index-1 ; index = i;}
        }
        ll ans = 0;
        for(int x = 0; x<n && s[x]=='0'; x++) {
                for(int y = x; y<n && s[y]=='0'; y++) {
                    int zeros = cntzero[y+1] - cntzero[x];
                    int ones = cntones[y+1] - cntones[x];
                    int reqd = zeros - ones;
                    if(ones > zeros) continue;
                    else if(ones == zeros) ans = (ans+1)%MODN;
                    else {
                        int avl = x + v2[y] - v1[x] - y;
                        if(reqd <= avl) ans = (ans + min((x - v1[x] + 1), (v2[y] - y + 1)))%MODN;
                    }
            }
        }
        
        cout << ans << endl;
        
    }
}