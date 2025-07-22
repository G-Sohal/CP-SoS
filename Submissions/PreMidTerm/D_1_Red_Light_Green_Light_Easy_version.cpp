#include <iostream>
#include <unordered_map>
#include <vector>
#include <tuple>
#include <set>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> p(n);
        vector<int> d(n);
        unordered_map<ll, int> light_map;

        for (int i = 0; i < n; ++i) cin>>p[i];

        for (int i = 0; i < n; ++i) {
            cin >> d[i];
            light_map[p[i]] = d[i];
        }

        int q;
        cin >> q;
        vector<ll> a(q);
        for (int i = 0; i < q; ++i) cin>>a[i];

        ll min_pos = p[0];
        ll max_pos = p[n - 1];

        for (int i = 0; i < q; ++i) {
            ll pos = a[i];
            int time = 0;
            int dir = 1;

            set<tuple<ll, int, int>> visited;
            bool escaped = false;

            while (true) {
                tuple<ll, int, int> state = make_tuple(pos, dir, time%k);

                if (visited.count(state)) {
                    cout<<"NO"<<endl;
                    break;
                }
                visited.insert(state);
                if (light_map.count(pos) && (time%k == light_map[pos])) {
                    dir *= -1;
                }

                pos+=dir;
                time++;

                if (pos < min_pos || pos > max_pos) {
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }
    }
}
