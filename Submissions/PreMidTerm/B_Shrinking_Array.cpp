#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> a(n, 0);
        for(int i=0; i<n; i++) cin>>a[i];
        int cnt = 1001;
        for(int i=0; i<(n-1); i++) {
            if(abs(a[i+1] - a[i]) <= 1) {
                cnt = 0; 
                break;
            }
        }
        if(cnt == 0) {
            cout<<"0"<<endl;
            continue;
        }
        for(int i=0; i<(n-2); i++) {
            if(a[i] >= a[i+1]) {
                if(a[i+1] > a[i+2]) continue;
                else {
                    cnt = 1;
                    break;
                }
            }
            else {
                if(a[i+2] > a[i+1]) continue;
                else {
                    cnt = 1;
                    break;
                }
            }
        }
        if(cnt == 1) cout<<"1"<<endl;
        else cout<<"-1"<<endl;
    }
}