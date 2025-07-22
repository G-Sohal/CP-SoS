#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin>>n>>m;
    queue<pair<int, int>> q_monsters;
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>grid[i][j];
            if(grid[i][j] == 'M') q_monsters.push({i, j});
        }
    }
    vector<vector<int>> time(n, vector<int>(m, n*n));
    while(!q_monsters.empty()) {
        auto &p = q_monsters.front(); q_monsters.pop();
        if()
    }
    
    
}