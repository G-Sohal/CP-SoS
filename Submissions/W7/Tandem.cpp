#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
using namespace std;

string s;
vector<vector<int>> c;

int log_n;
int n;

pair<vector<int>, vector<vector<int>>> sort_cyclic_shifts(string const& s) {
    n = s.size();
    const int alphabet = 256;
    vector<int> p(n), curr_c(n), cnt(max(alphabet, n), 0);
    for (int i = 0; i < n; i++) cnt[s[i]]++;
    for (int i = 1; i < alphabet; i++) cnt[i] += cnt[i - 1];
    for (int i = 0; i < n; i++) p[--cnt[s[i]]] = i;
    curr_c[p[0]] = 0;
    int classes = 1;
    for (int i = 1; i < n; i++) {
        if (s[p[i]] != s[p[i - 1]]) classes++;
        curr_c[p[i]] = classes - 1;
    }

    c.push_back(curr_c);
    vector<int> pn(n), cn(n);

    for (int h = 0; (1 << h) < n; ++h) {
        for (int i = 0; i < n; i++) {
            pn[i] = p[i] - (1 << h);
            if (pn[i] < 0) pn[i] += n;
        }
        fill(cnt.begin(), cnt.begin() + classes, 0);
        for (int i = 0; i < n; i++) cnt[curr_c[pn[i]]]++;
        for (int i = 1; i < classes; i++) cnt[i] += cnt[i - 1];
        for (int i = n - 1; i >= 0; i--) p[--cnt[curr_c[pn[i]]]] = pn[i];
        cn[p[0]] = 0;
        classes = 1;
        for (int i = 1; i < n; i++) {
            pair<int, int> cur = {curr_c[p[i]], curr_c[(p[i] + (1 << h)) % n]};
            pair<int, int> prev = {curr_c[p[i - 1]], curr_c[(p[i - 1] + (1 << h)) % n]};
            if (cur != prev) ++classes;
            cn[p[i]] = classes - 1;
        }
        curr_c.swap(cn);
        c.push_back(curr_c);
    }

    log_n = c.size() - 1;
    return {p, c};
}

vector<int> suffix_array_construction(string s) {
    s += "$";
    pair<vector<int>, vector<vector<int>>> result = sort_cyclic_shifts(s);
    vector<int> sorted_shifts = result.first;
    c = result.second;
    sorted_shifts.erase(sorted_shifts.begin());
    for (auto& row : c) row.erase(row.begin());
    n--;
    return sorted_shifts;
}

int compare(int i, int j, int l) {
    int k = 31 - __builtin_clz(l);
    pair<int, int> a = {c[k][i], c[k][(i + l - (1 << k)) % n]};
    pair<int, int> b = {c[k][j], c[k][(j + l - (1 << k)) % n]};
    return a == b ? 0 : a < b ? -1 : 1;
}

// vector<int> lcp_construction(string const& s, vector<int> const& p) {
//     int n = s.size();
//     vector<int> rank(n, 0);
//     for (int i = 0; i < n; i++)
//         rank[p[i]] = i;

//     int k = 0;
//     vector<int> lcp(n-1, 0);
//     for (int i = 0; i < n; i++) {
//         if (rank[i] == n - 1) {
//             k = 0;
//             continue;
//         }
//         int j = p[rank[i] + 1];
//         while (i + k < n && j + k < n && s[i+k] == s[j+k])
//             k++;
//         lcp[rank[i]] = k;
//         if (k)
//             k--;
//     }
//     return lcp;
// }

int lcp(int i, int j) {
    int n = s.length();
    int k = floor(log2(n));
    int ans = 0;
    for (; k >= 0; k--) {
        if (c[k][i % n] == c[k][j % n]) {
            ans += 1 << k;
            i += 1 << k;
            j += 1 << k;
        }
    }
    return ans;
}

int main() {
	// your code goes here
	cin>>s;
    int n = s.length();
	vector<int> sa = suffix_array_construction(s);
	int interesting_suff = 0, boring_suff = 0;
    for(int len = 1; len <= ((n+2)/3); len++) {
        for(int p = 0; p<= (n - 3*len); p++) {
            if (lcp(p, p + len) == 2*len && lcp(p + len, p + 2*len) == len) {
                interesting_suff++;
                // cout<<p<<" "<<(p+len)<<" "<<(p+2*len)<<endl;
            }
            else if(lcp(p, p + len) > 2*len && lcp(p + len, p + 2*len) > len) {
                boring_suff++;
                // cout<<p<<" "<<(p+len)<<" "<<(p+2*len)<<endl;
            }
        }
    }
	cout<<interesting_suff<<" "<<boring_suff;
}