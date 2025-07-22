#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(m);
        for(ll i = 0; i < m; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        
        ll left = 0, right = m - 1;
        
        for(ll i = 0; i < n; i++) {
            ll low = a[left];
            ll high = a[right];
            if (i % 2 == 1) {
                cout << high << " " << low << " " << high << " " << low << " " << high << " " <<low<< "\n";
                left++; 
                right--;
            }
            else {
                cout << low << " " << high << " " << low << " " << high << " " << low << " " << high << "\n";   
            }
        }
    }
}
