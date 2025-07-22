#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        for(int i=0; i<n; i++) cin>>a[i];

        bool pall = true;
        for (int i = 0; i < n/2; i++){
            if (a[i] != a[n-1-i]){
                pall = false;
                break;
            }
        }
        if (pall){
            cout<<"YES"<<endl;
            continue;
        }
        if (k == 1){
            cout<<"YES"<<endl;
            continue;
        }
        vector<int> b = a;
        sort(b.begin(), b.end());
        unordered_map<int,int> freq;
        freq.reserve(k);
        for (int i = 0; i < k-1; i++){freq[b[i]]++; }
        vector<int> P;
        P.reserve(k-1);
        for (int x : a){
            auto it = freq.find(x);
            if (it != freq.end() && it->second > 0){
                P.push_back(x);
                if (--(it->second) == 0)
                    freq.erase(it);
                if ((int)P.size() == k-1)
                    break;
            }
        }

        bool ok = true;
        int m = P.size();
        for (int i = 0; i < m/2; i++){
            if (P[i] != P[m-1-i]){
                ok = false;
                break;
            }
        }
        if (ok){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
