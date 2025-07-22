#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;

//KNAPSACK PROBLEM

int main() {
    int n; cin>>n;
    vector<ll> w;
    ll p;
    ll W = 0 ;
    while(cin>>p){
        w.push_back(p);
        W += p;
    }
    vector<bool> poss(W+1, false);
    sort(w.begin(), w.end());
    poss[0] = true;
    
    for(int k = 0; k < n; k++) {
        for(int x = W; x>=0; x--) {
            if(poss[x]) poss[x + w[k]] = true;
        }
    }
    
    ll hs = W/2;
    for(int i = hs; i>=0; i--) {
        if(poss[i]) {
            hs = i;
            break;
        }
    }
    cout<<(W - 2*hs)<<endl;
}