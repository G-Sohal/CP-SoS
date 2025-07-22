#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin >> t;
    while (t--) {
        int n, m, k; cin>>n>>m>>k;
        vector<char> a(n), b(m);
        for (int i = 0; i < n; i++) cin>>a[i];
        for (int i = 0; i < m; i++) cin>>b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<char> c;
        int i = 0, j = 0;
        int turnsa = 0, turnsb = 0;

        while (i < n && j < m) {
            if ((a[i] < b[j] && turnsa < k) || turnsb == k) {
                c.push_back(a[i]);
                i++;
                turnsa++;
                turnsb = 0;
            } 
            else {
                c.push_back(b[j]);
                j++;
                turnsb++;
                turnsa = 0;
            }
        }

        for (char d : c) cout<<d;
        cout<<endl;
    }
}
