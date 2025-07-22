#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<set<int>> S; // size n
        set<int> s_union;
        for(int i=0; i<n; i++) {
            int k; cin>>k;
            set<int> s;
            for(int j=0; j<k; j++) {
                int x; cin>>x;
                s.insert(x);
                s_union.insert(x);
            }
            S.push_back(s);
        }
        for(int i : s_union) {
            // check cardinality of the union of the sets not containing this integer i
            for(auto &z : S {
                
            }
        }
        // vector<set<int>> S;
        // set<int> q = {};
        // vector<set<int>> v(50, q);
        // for(int i = 0; i < n; i++) {
        //     int k; cin >> k;
        //     set<int> s = {};
        //     for(int j = 0; j < k; j++) {
        //         int x; cin >> x;
        //         x--;
        //         s.insert(x);
        //         v[x].insert(i);
        //     }
        //     S.push_back(s);
        // }

        // int minf = 51;
        // for(auto &z : v) {
        //     if(!z.empty()) {
        //         minf = min(minf, (int)z.size());
        //     }
        // }
        // int redn = 51;
        // vector<bool> done(50, false);
        // for(int i = 0; i < 50; i++) {
        //     if(!v[i].empty()) {
        //         int cnt = 1;
        //         for(int j = 0; j < 50 && j!=0; j++) {
        //             if(v[j] == v[i]) {cnt++; done[j] = true;}
        //         }
        //         redn = min(redn, cnt);
        //     }
        // }
        // int union_size = 0;
        // for(auto &z : v) {
        //     if(!z.empty()) union_size++;
        // }
        // int ans = union_size - redn;
        // cout<<ans<<endl;
    }
}
