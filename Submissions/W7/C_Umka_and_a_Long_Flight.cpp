#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;
int MAXN = 46;
vector<ll> fibo(MAXN, 0);

bool solve(int n, int x, int y) {
    if(n==1) return true;
    // if vich vachale no fn-1 square can be cut so no
    else if(fibo[n-1] <=y && y<fibo[n]) return false;
    else if(fibo[n] <= y) y-=fibo[n];
    return solve(n-1, y, x);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    fibo[0] = 1;
    fibo[1] = 1;
    for(int i = 2; i<MAXN; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    ll t; cin>>t;
    while(t--) {
        int n, x, y; cin>>n>>x>>y;
        x--; y--;
        if(solve(n, x, y)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}