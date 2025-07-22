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
        int n, k; cin>>n>>k;
        if(n < (2*k - 1)) cout<<"-1"<<endl;
        else {
            vector<vector<char>> placed(n, vector<char>(n, '.'));
            for(int i=0; i<=(2*k - 2); i+=2) placed[i][i] = 'R';
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) cout<<placed[i][j];
                cout<<endl;
            }
        }
    }
}