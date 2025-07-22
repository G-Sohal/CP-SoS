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
        vector<int> a(n, 0);
        for(int i=0; i<n; i++) cin>>a[i];
        bool poss = false;
        for(int i=0; i<(n-1) && !poss; i++) {
            if(a[i] > a[i+1]) {
                cout<<"YES"<<endl;
                cout<<"2"<<endl;
                cout<<a[i]<<" "<<a[i+1]<<endl;
                poss = true;
            }
        }
        if(!poss) cout<<"NO"<<endl;
    }
}