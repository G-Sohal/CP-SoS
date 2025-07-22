#include <iostream>
#include <vector>
#include <algorithm>
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
        vector<tuple<int, int, int>> coord(n);
        for(int i=0; i<n; i++) {
            int x, y; cin>>x>>y;
            coord[i] = {x, y, i+1};
        }
        sort(coord.begin(), coord.end());
        vector<tuple<int, int, int>> right;
        vector<tuple<int, int, int>> left;

        for(int i=0; i<n; i++) {
            int x = get<0>(coord[i]);
            int y = get<1>(coord[i]);
            int j = get<2>(coord[i]);
            if(i < (n/2)) {
                right.push_back({y, x, j});
            } else {
                left.push_back({y, x, j});
            }
        }

        sort(right.end(), right.end());
        sort(left.rbegin(), left.rend());
        
        // int d = 0;
        for(int i=0; i<(n/2); i++) {
            // d += abs(get<1>(right[i]) - get<1>(left[i])) + abs(get<0>(right[i]) - get<0>(left[i]));
            cout<<get<2>(right[i])<<" "<<get<2>(left[i])<<endl;
        }
        // cout<<"d => "<<d<<endl;
    }
}