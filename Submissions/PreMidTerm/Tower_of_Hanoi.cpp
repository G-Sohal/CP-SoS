#include<iostream>
#include<vector>
#define ll long long
using namespace std;

vector<pair<int, int>> m;

int solve(int k, int a, int b, int c) {
    if(k == 1) {
        m.push_back({a, c});
        return 1;
    }
    else {
        int j = solve(k-1, a, c, b);
        int p = solve(1, a, b, c);
        int l = solve(k-1, b, a, c);
        return j+p+l;
    }
}

int main() {
    int n; 
    cin>>n;
    cout<<solve(n, 1, 2, 3)<<endl;
    for(auto p : m) {
        cout<<p.first<<" "<<p.second<<endl;
    }
}