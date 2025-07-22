#include<iostream>
using namespace std;

long long solve(long long k) {
    if(k == 1) return 0;
    else {
        long long total = (k*k)*((k*k) - 1)/2;
        long long att = 4*(k - 1)*(k - 2);
        return (total - att) ;
    }
}

int main() {
    long long n;
    cin>>n;
    for(long long i = 1; i<=n; i++) {
        cout<<solve(i)<<endl;;
    }
}