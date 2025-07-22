#include<iostream>
#include<set>
#define ll long long
using namespace std;

int main() {
    int n; cin>>n;
    set<ll> s;
    ll x;
    while(cin>>x) {
        s.insert(x);
    }
    cout<<s.size();
}