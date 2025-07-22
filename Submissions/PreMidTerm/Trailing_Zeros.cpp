#include<iostream>
#define ll long long

using namespace std;

ll MOD = 1e9 + 7;

int main() {
    long long n; 
    cin>>n;
    long long ans = 0;
    long long z = 5;
    long long m = n/z;
    while(m != 0) {
        ans += m ;
        m/=z;
    }
    cout<<ans<<endl;
}