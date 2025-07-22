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
        int sum = 0;
        for(int i=0; i<n; i++){ cin>>a[i]; sum+=a[i];}
        if(sum%2) {
            cout<<"NO"<<endl;
        }
        else {
            int sumt = 0;
            int i = (n-1);
            for(; i>=0; i--) {
                sumt+=a[i];
                if(2*sumt > sum) break;
            }
            i++;
            if(i < n) {
                
            }
        }

    }
}