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
        int sq = n*n;
        int st = 1;
        int where = 1;
        for(int j = 1; j<=n; j++) {
            vector<int> row(n, 0);
            for(int i=1; i<=n; i++) {
                if(where == 1) {
                    row[i-1] = st;
                    st++;
                }
                else {
                    row[i-1] = sq;
                    sq--;
                }
                where = 1 - where;
            }
            if(j%2 == 0) {
                reverse(row.begin(), row.end());
            }
            for(int z : row) cout<<z<<" ";
            cout<<endl;
        }
    }
}