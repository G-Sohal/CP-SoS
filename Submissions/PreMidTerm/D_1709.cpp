#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++) {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++) {
            cin>>b[i];
        }
        vector<pair<int, int>> op;
        for(ll i=0; i<n; i++) {
            if(a[i] > b[i]) {
                op.push_back({3, i+1});
                swap(a[i], b[i]);
            }
        }
        bool swapped;
  
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    op.push_back({1, j+1});
                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }

        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    swap(b[j], b[j + 1]);
                    op.push_back({2, j+1});
                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
        cout<<op.size()<<endl;
        for(auto p : op) cout<<p.first<<" "<<p.second<<endl;

    }
}