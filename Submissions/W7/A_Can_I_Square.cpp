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
        int n; cin>>n;
        ll sum = 0;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            sum += x;
        }
        ll rt = sqrt(sum);
        if(rt*rt == sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}