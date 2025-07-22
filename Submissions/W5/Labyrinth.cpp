#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;
 
void fastio(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}
 
signed main(){
	fastio();
    long long n, m;
    cin>>n>>m;
    vector<bool> v(m, true); 
    vector<int> w(m, 0);
    vector<vector<bool>> checked(n, v);
    pair<long long, long long> start, end;
    for(long long i=0; i<n; i++) {
        for(long long j=0; j<m; j++) {
            char c; cin>>c;
            if(c !='#') checked[i][j] = false;
            if(c == 'A') start = {i, j};
            if(c == 'B') end = {i, j};
        }
    }

    queue<pair<long long, long long>> q;
    q.push(start);
    // map<pair<long long, long long>, pair<long long, long long>> parent; 
    //map takes O(logn) time to access and insert terms. uses red-black tree - NEW
    
    vector<vector<int>> direction(n, w);
    bool possible = false;
    while(!q.empty()) {
        auto v = q.front(); q.pop();
        long long i = v.first; long long j = v.second;
        if(i>0 && !checked[i-1][j]) {
            checked[i-1][j] = true;
            q.push({i-1, j});
            direction[i-1][j] = -1;
            if(end.first == (i-1) && end.second == j) { possible = true; break;}
        }
        if(j>0 && !checked[i][j-1]) {
            checked[i][j-1] = true; 
            q.push({i, j-1}); 
            direction[i][j-1] = -2;
            if(end.first == (i) && end.second == (j-1)) { possible = true; break;}
        }
        if(i<(n-1) && !checked[i+1][j]){
            checked[i+1][j] = true; 
            q.push({i+1, j}); 
            direction[i+1][j] = 1;
            if(end.first == (i+1) && end.second == j) { possible = true; break;}
        }
        if(j<(m-1) && !checked[i][j+1]) {
            checked[i][j+1] = true; 
            q.push({i, j+1}); 
            direction[i][j+1] = 2;
            if(end.first == (i) && end.second == (j+1)) { possible = true; break;}
        }
    }

    if(!possible) {
        cout<<"NO"<<endl; return 0;
    }
    cout<<"YES"<<endl;
    vector<char> path;
    int i = end.first, j = end.second;

    while (i != start.first || j != start.second) {
        int d = direction[i][j];
        if (d == -1) {
            path.push_back('U');
            i++;
        } else if (d == -2) {
            path.push_back('L');
            j++;
        } else if (d == 1) {
            path.push_back('D');
            i--;
        } else if (d == 2) {
            path.push_back('R');
            j--;
        }
    }

    reverse(path.begin(), path.end());
    cout<<path.size()<<endl;
    for (char c : path) cout<<c;
    cout<<endl;
}