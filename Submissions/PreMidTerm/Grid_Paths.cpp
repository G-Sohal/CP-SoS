#include<iostream>
#include<vector>
using namespace std;

// USE DFS

vector<char> given;
vector<vector<bool>> occ(7, vector<bool>(7, false));

bool valid(int r, int l, int u, int d) {
    if((r-l) >= 0 && (r-l) <= 6 && (d-u)>=0 && (d-u)<=6) return true;
    return false;
}

void paths(int r, int l, int u, int d, int &count, int steps) {
    // cout<<steps<<") "<<r-l<<", "<<d-u<<endl;
    if(steps == 48) {
        if(r == l && (d - u) == 6) count++;
        return; 
    }
    if(given[steps] == 'R') {
            if(valid(r+1, l, u, d) && !occ[r-l+1][d-u]) {
                occ[r-l+1][d-u]=true;
                paths(r+1, l, u, d, count, steps+1);
                occ[r-l+1][d-u]=false;
            }
            else return;
        }
    else if(given[steps] == 'L') {
            if(valid(r, l+1, u, d) && !occ[r-l-1][d-u]) {
                occ[r-l-1][d-u]=true; 
                paths(r, l+1, u, d, count, steps+1);
                occ[r-l-1][d-u]=false;
            }
            else return;
        }
    else if(given[steps] == 'U') {
            if(valid(r, l, u+1, d) && !occ[r-l][d-u-1]) {
                occ[r-l][d-u-1]=true; 
                paths(r, l, u+1, d, count, steps+1);
                occ[r-l][d-u-1]=false;
            }
            else return;
        }
    else if(given[steps] == 'D') {
            if(valid(r, l, u, d+1) && !occ[r-l][d-u+1]) {
                occ[r-l][d-u+1]=true; 
                paths(r, l, u, d+1, count, steps+1);
                occ[r-l][d-u+1]=false;
            }
            else return;
        } 
    else {
        if(valid(r+1, l, u, d) && !occ[r-l+1][d-u]) {
            occ[r-l+1][d-u]=true; 
            paths(r+1, l, u, d, count, steps+1);
            occ[r-l+1][d-u]=false;
        }
        if(valid(r, l+1, u, d) && !occ[r-l-1][d-u]) {
            occ[r-l-1][d-u]=true; 
            paths(r, l+1, u, d, count, steps+1);
            occ[r-l-1][d-u]=false;
        }
        if(valid(r, l, u+1, d) && !occ[r-l][d-u-1]) {
            occ[r-l][d-u-1]=true;
             paths(r, l, u+1, d, count, steps+1);
             occ[r-l][d-u-1]=false;
            }
        if(valid(r, l, u, d+1) && !occ[r-l][d-u+1]) {
            occ[r-l][d-u+1]=true;
            paths(r, l, u, d+1, count, steps+1);
            occ[r-l][d-u+1]=false;
        }
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    char c;
    while(cin>>c) {
        given.push_back(c);
    }
    int count = 0;
    occ[0][0] = true;
    paths(0, 0, 0, 0, count, 0);
    cout<<count<<endl;
}