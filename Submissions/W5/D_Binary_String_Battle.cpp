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
        int n, k; cin>>n>>k;
        string s; cin>>s;
        int cnt = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '1') cnt++;
        }
        if(cnt<=k) {
            cout<<"Alice"<<endl;
            continue;
        }
        if((2*k - n) <= 0) {
            cout<<"Bob"<<endl;
            continue;
        }
        cout<<"Alice"<<endl;
    }
}