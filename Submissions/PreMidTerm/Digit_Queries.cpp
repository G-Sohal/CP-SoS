#include<iostream>
#include<cmath>
#include<string>
#define ll long long
using namespace std;

int main() {
    int q; cin>>q;
    while(q--) {
        ll k; 
        cin>>k;
        int p = 0;
        ll num;
        while(k>0) {
            num = 9*(pow(10, p))*(p + 1);
            p++;
            if( (k - num) > 0 ) k-=num;
            else break;
        }
        ll num_str = (k-1)/p;

        ll rem = k - p*num_str - 1; 
        ll res = pow(10, p-1) + num_str;
        string result = to_string(res);
        cout<<result[rem]<<endl;
    }
}