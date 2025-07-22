#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<vector<int>> grid(n, vector<int>(n, 0));
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) cin>>grid[i][j];
        }
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1) {
                    grid[i][j] = 0;
                    cnt++;
                    cout<<i<<j<<endl;
                    for(int x = (i+1); x<n; x++) {
                    for(int y=(j+1); y<n; y++) {
                        if(x - i >= abs(y - j)) grid[x][y]= 1 - grid[x][y];
                    }
                }
                }
            }
        }
        cout<<cnt<<endl;
    }
}