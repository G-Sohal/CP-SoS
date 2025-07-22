#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;

vector<bool> tmp(8, false);
vector<vector<bool>> occ(8, tmp);
vector<bool> col(8, false);
vector<bool> diag(15, false);
vector<bool> diag2(15, false);

void solve(int y, int &count) {
    for(int i = 0; i<8; i++) {
        if(col[i] | diag[i + y] | diag2[i - y + 7] | occ[i][y]) continue;
        if(y<7) {
            col[i] = true;
            diag[i + y] = true;
            diag2[i - y + 7] = true;
            solve(y + 1, count);
            col[i] = false;
            diag[i + y] = false;
            diag2[i - y + 7] = false;
        }
        if(y == 7) count++;
    }
}

int main() {
    char c;
    
    for(int i = 0; i<8; i++) {
        for(int j=0; j<8; j++) {
            cin>>c;
            if(c == '*') occ[i][j] = true;
        }
    }
    int count = 0;
    solve(0, count);
    cout<<count<<endl;
}