#include <iostream>
#include <algorithm>

#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a[n];
        
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        sort(a, a+n);
        for(int i=0; i<n; i++) {
            a[i] = a[i]%2;
        }
        if(a[0] == a[n-1]) {
            cout<<0<<endl;
            continue;
        }
        else {
            int count=0;
            for(int i = n-1; i>0; i--){
                if(a[i] == a[0]) break;
                count++;
            }
            int cnt = 0;
            for(int i = 0; i<n-1; i++) {
                if(a[i] == a[n-1]) break;
                cnt++;
            }
            cout<<min(count, cnt)<<endl;
        }
    }
}