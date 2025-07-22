#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
    cin.tie(0);
    ll n; 
    cin>>n;
    vector<int> towers;
    for(ll i=0; i<n; i++) {
        ll k;
        cin>>k;
        if(towers.empty() || k >= towers.back()) {
            towers.push_back(k);
        }
        else {
            auto it = upper_bound(towers.begin(), towers.end(), k);
            towers[it - towers.begin()] = k;
        }
        cout<<endl;
    }
    cout<<towers.size()<<endl;
}