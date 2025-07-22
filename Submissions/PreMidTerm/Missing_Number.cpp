#include<iostream>
#include<vector>
using namespace std;
int main() {
    long long n; cin>>n;
    vector<bool> v(n, false);
    long long x;
    for(long long i=0; i<n; i++) {
        cin>>x; 
        v[x-1] = true;
    }
    for(long long i=0; i<n; i++) {
        if(!v[i]){
            cout<<(i+1)<<"\n";
            break;
        }
    }
}