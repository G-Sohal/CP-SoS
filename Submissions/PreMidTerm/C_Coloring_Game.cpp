#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--) {
       int n; cin>>n;
       vector<int> a(n, 0);
       for(int i=0; i<n; i++) cin>>a[i];
       ll cnt = 0;
       for(int i=0; i<(n-2); i++) {
        for(int j=(i+1); j<(n-1); j++) {
            int ind1, ind2;
            if((a[n-1] - a[i] - a[j]) > 0) {
                auto it2 = upper_bound(a.begin(), a.end(), a[n-1] - a[i] - a[j]);
                ind2 = it2 - a.begin();
                ind2 = max(j+1, ind2);
            }
            else {
                ind2 = j + 1;
            }
            auto it1 = lower_bound(a.begin(), a.end(), (a[i] + a[j]));
            ind1 = it1 - a.begin();
            cnt += max(ind1 - ind2, 0);
        }
       }
       cout<<cnt<<endl;
    }
}