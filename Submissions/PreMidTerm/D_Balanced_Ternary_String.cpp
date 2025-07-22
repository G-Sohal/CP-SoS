#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    ll c0 = 0, c1 = 0, c2 = 0;
    vector<int> s(n);
    for (ll i = 0; i < n; i++) {
        char c;
        cin>>c;
        s[i] = c-'0';
        if (s[i] == 0) c0++;
        else if (s[i] == 1) c1++;
        else c2++;
    }

    if (3 * c0 <= n) {
        if (3 * c1 <= n) {
            for (ll i = 0; i < n; i++) {
                if (s[i] == 2 && 3*c2 > n) {
                    if (3 * c0 < n) { s[i] = 0; c0++; c2--;}
                    else if (3 * c1 < n) { s[i] = 1; c1++; c2--;}
                }
            }
        }
        else {
            if (3 * c2 > n) {
                for (ll i = 0; i < n; i++) {
                    if (s[i]>0 && 3*c0<n) { 
                        if(s[i] == 1 && 3*c1 > n) {s[i] = 0; c0++; c1--;}
                        else if(s[i] == 2 && 3*c2 > n) {s[i] = 0; c0++; c2--;}
                    }
                }
            }
            else {
                for (ll i = 0; i < n; i++) {
                    if (s[i] == 1 && 3*c1 > n) {
                        if (3 * c0 < n) { s[i] = 0; c0++; c1--;}
                    }
                }
                for (ll i = (n - 1); i >= 0; i--) {
                    if (s[i] == 1 && 3*c1 > n) {
                        if (3 * c2 < n) { s[i] = 2; c2++; c1--;}
                    }
                }
            }
        }
    }
    else {
        if (3 * c1 > n) {
            for (ll i = (n - 1); i >= 0; i--) {
                if (s[i] == 0) {
                    if (3 * c2 < n && 3 * c0 > n) { s[i] = 2; c2++; c0--; }
                }
                if (s[i] == 1) {
                    if (3 * c2 < n && 3 * c1 > n) { s[i] = 2; c2++; c1--; }
                }
            }
        }
        else if (3 * c2 <= n) {
            for (ll i = (n - 1); i >= 0; i--) {
                if (s[i] == 0) {    
                    if (3 * c2 < n && 3 * c0 > n) { s[i] = 2; c2++; c0--; }
                    else if (3 * c1 < n && 3 * c0 > n) { s[i] = 1; c1++; c0--; }
                }
            }
        }
        else {
            for (ll i = 0; i < n; i++) {
                if (s[i] == 2 && 3*c2 > n && 3*c1 < n) {
                    s[i] = 1; c1++; c2--;
                }
            }
            for (ll i = (n - 1); i >= 0 && 3 * c1 < n; i--) {
                if (s[i] == 0 && 3*c0 > n && 3*c1<n) {
                     s[i] = 1; c1++; c0--;
                }
            }
        }
    }
    for (int d : s) cout << d;
    cout << endl;

    return 0;
}
