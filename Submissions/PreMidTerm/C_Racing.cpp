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
        int d[n];
        for(int i =0; i<n; i++) cin>>d[i];
        int l[n];
        int r[n];
        for(int i =0; i<n; i++) cin>>l[i]>>r[i];
        bool pos = true;
        int hu = 0; int hl = 0;
        

        for(int i=0; i<n && pos; i++) {
            if(d[i] == 0) {
                if(hl < l[i]) hl = l[i];
                if(hu > r[i]) hu = r[i];
                if(hl > hu) pos = false;
            }
            if(d[i] == 1) {
                hl++; hu++;
                if(hl < l[i]) hl = l[i];
                if(hu > r[i]) hu = r[i];
                if(hl > hu) pos = false;
            }
            else { // d[i] = -1
                hu++;
                if(hl < l[i]) hl = l[i];
                if(hu > r[i]) hu = r[i];
                if(hl > hu) pos = false;
            }
        }

        if(pos) {
            for(int i = 0; i<n; i++) cout<<d[i]<<" ";
        }
        else cout<<"-1";
        cout<<endl;
    }
}