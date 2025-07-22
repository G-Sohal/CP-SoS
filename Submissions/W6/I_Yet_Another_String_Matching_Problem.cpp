#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string S, T;
    cin>>S>>T;
    for(int i=0; i<=(S.size()-T.size()) ; i++) {
        string s = S.substr(i, T.size());
        int comp = 0;
        set<char> x = {};
        for(int i=0; i<T.size(); i++) {
            if(s[i] != T[i]) {x.insert(s[i]); x.insert(T[i]);}
        }
        cout<<(comp- 1)<<" ";
    }
}