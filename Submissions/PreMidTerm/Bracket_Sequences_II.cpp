#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

ll valid(ll o, ll c, ll n) {
    if(o == n) return 1;
    if(c == n) return 1;
    if(o == c) return valid(o+1, c, n);
    else return (valid(o+1,c, n) + valid(o, c+1, n));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll MODN = 1e9 + 7;
    ll n; cin>>n;
    n/=2;
    ll o = 0;
    ll c = 0;
    char b;
    while(cin>>b) {
        if(b == '(') o++;
        else c++;
        if(c > o) {cout<<"0"; return 0;}
    }
    cout<<valid(o, c, n)<<endl;
    
}