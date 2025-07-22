#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

int mex(vector<int> const& A) {
    set<int> b(A.begin(), A.end());

    int result = 0;
    while (b.count(result))
        ++result;
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> p(n, 0);
        int j = 0;
        for(int i=0; i<n; i++) {cin>>p[i]; if(p[i] == 0) j = i;}
        
        vector<int> P(n, 0);
        for(int i=0; i<n; i++) {
            if((i+j) < n) P[i] = p[j+i];
            else P[i] = p[n - i + j];
        }
        vector<int> dist(n, 0);
        for(int i=0; i<n; i++) {
            if(i < j) dist[i] = (n + i - j);
            else if(i > j) dist[i] = i - j; 
        }
        int ans = 0; //if 0 at the end;
        vector<int> MEX(n, 0);
        vector<int> tmp;
        for(int i=0; i<n; i++) {
            tmp.push_back(i);
            MEX[i] = mex(tmp);
        }
        for(int len=1; len<n; len++) { //len left after 0 till end
            if(mex[len-1] <= mex[len]) ans+=mex[len];
            ans = max(ans, ans+)
        }
    }
}