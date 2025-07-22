#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
    ll t; 
    cin>>t;
    while(t--) {
        // cout<<t<<")---------------"<<endl;
        ll n; 
        cin>>n;
        
        vector<pair<ll, ll>> coord;
        vector<ll> l, b;
        ll lmin = 1e9;
        ll bmin = 1e9;
        for(int i =0; i<n; i++) {
            ll x, y;
            cin>>x>>y;
            coord.push_back({x, y});
            lmin = min(y, lmin);
            bmin = min(x, bmin);
        }
        if(n < 3) {
            cout<<n<<endl; 
            continue;
        }
        for(int i =0; i<n; i++) {
            l.push_back(coord[i].second - lmin);
            b.push_back(coord[i].first - bmin);
        }
        sort(l.begin(), l.end());
        sort(b.begin(), b.end());

        ll len=l[n-1] - l[0];
        ll bre=b[n-1] - b[0];
        ll area = (len+1)*(bre+1);
        ll lent = len;
        ll bret = bre;
        if(l[0] != l[1])  lent = l[n-1] - l[1];
        if(l[n-1] != l[n-2]) lent = min(lent, l[n-2] - l[0]);
        
        if(b[0] != b[1])  bret = b[n-1] - b[1];
        if(b[n-1] != b[n-2]) bret = min(bret, b[n-2] - b[0]);

        area = min((lent+1)*(bre+1), area);

        area = min(area, (len+1)*(bret+1));

        if(area < n) {
            area = min((lent+2)*(bre+1), (lent+1)*(bre+2));
            ll areat = min((bret+2)*(len+1), (bret+1)*(len+2));
            area = min(area, areat);
        }
        cout<<area<<endl;
    }
}