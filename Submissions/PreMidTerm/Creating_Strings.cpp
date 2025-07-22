#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#define ll long long
using namespace std;

void recur(int index, string &s, vector<string> &ans) {
    if(index == s.size()) {
        ans.push_back(s);
        return;
    }
    for(int i = index; i<s.size(); i++) {
        swap(s[index], s[i]);
        recur(index + 1, s, ans);
        swap(s[index], s[i]);
    }
}

int main() {
    char c;
    string s= "";
    while(cin>>c) {
        s+=c;
    }
    vector<string> ans;
    recur(0, s, ans);
    sort(ans.begin(), ans.end());
    set<string> result ;
    for(int i = 0; i<ans.size(); i++) {
        result.insert(ans[i]);
    }
    cout<<result.size()<<endl;
    for(string z : result) cout<<z<<endl;
}