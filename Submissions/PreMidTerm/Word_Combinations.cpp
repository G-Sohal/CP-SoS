#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<unordered_map>
#include <set>
#include <string>
#define ll long long
using namespace std;

// // Precomputing the hashes is too slow (O(nk)), so a faster method is needed
// // KNAPSACK MUST BE USED
// unordered_map<string, int> dict;

// void solve(string s, ll &count) {
//     for(size_t i = 1; i<=s.size(); i++) {
//         auto it = dict.find(s.substr(0, i));
//         if(it != dict.end()) {
//             if(i == s.size() ) count++;
//             else solve(s.substr(i, s.size() - i), count);
//         }
//     }
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     string s; cin>>s;
//     ll k; cin>>k;
    
//     string x;
//     for(ll i=0; i<k; i++) {
//         cin>>x;
//         dict.insert({x, i});
//     }
//     ll count = 0;
//     solve(s, count);
//     cout<<count<<endl;
// }