#include <iostream>
#include <vector>
#include <queue>

using namespace std;
 
void fastio(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}
 
signed main(){
	fastio();
    int n, m;
    cin>>n>>m;
    vector<bool> v(m, true);
    vector<vector<bool>> checked(n, v);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            char c; cin>>c;
            if(c=='.') checked[i][j] = false;
        }
    }
    int cnt = 0;
    for(int k=0; k<n; k++) {
        for(int l=0; l<m; l++) {
            if(!checked[k][l]) {
                cnt++;
                queue<pair<int, int>> q;
                q.push({k, l});
                checked[k][l] = true;
                while(!q.empty()) {
                    auto v = q.front(); q.pop();
                    int i = v.first; int j = v.second;
                    if(i>0 && !checked[i-1][j]) {checked[i-1][j] = true; q.push({i-1, j});}
                    if(j>0 && !checked[i][j-1]) {checked[i][j-1] = true; q.push({i, j-1});}
                    if(i<(n-1) && !checked[i+1][j]){checked[i+1][j] = true; q.push({i+1, j});}
                    if(j<(m-1) && !checked[i][j+1]) {checked[i][j+1] = true; q.push({i, j+1});}
                }
            }
        }
    }
    cout<<cnt<<endl;
}