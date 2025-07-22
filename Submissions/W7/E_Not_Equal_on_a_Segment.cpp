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

    // ll t; cin>>t;
    // while(t--) 
    {
        int n, m; cin>>n>>m;
        vector<int> a(n, 0);
        for(int i=0; i<n; i++) cin>>a[i];
        // int xmax = 1e6 + 1;
        vector<int> sameleft(n, 0), samergt(n, n-1);
        for(int i=1; i<n; i++) {
            if(a[i] != a[i-1]) sameleft[i]=i;
            else sameleft[i] = sameleft[i-1];
        }
        for(int i=(n-2); i>=0; i--) {
            if(a[i] != a[i+1]) samergt[i] = i;
            else samergt[i] = samergt[i+1];
        }
        while(m--) {
            int l, r, x;
            cin>>l>>r>>x;
            l--; r--;
            if(a[l] != x) cout<<(l+1)<<endl;
            else if(a[r] != x) cout<<(r+1)<<endl;
            else if(samergt[l] < sameleft[r]) {
                cout<< samergt[l]+2 <<endl;
            }
            else cout<<"-1"<<endl;
        }
        
    }
}