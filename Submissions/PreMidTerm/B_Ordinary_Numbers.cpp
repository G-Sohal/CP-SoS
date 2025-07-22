#include<iostream>
#define ll unsigned long long
using namespace std;

int main() {
    ll t; 
    cin>>t;
    while(t--) {
        ll n; 
        cin>>n;
        ll m = n;
        ll count = 0;
        ll digit = 0;
        while(n>0) {
            n/=10;
            digit++;
        }
        count+=9*(digit-1);
        ll a[digit];
        for(int i=0; i<digit; i++) {
            a[digit - 1 - i] = m%10;
            m/=10;
        }
        ll ans = a[0];
        for(int i=1; i<digit; i++) {
            if(a[i] < a[i-1]) {
                ans--; break;
            }
            if(a[i] > a[i-1]) break;
        }
        count+=ans;
        cout<<count<<endl;
    }
}