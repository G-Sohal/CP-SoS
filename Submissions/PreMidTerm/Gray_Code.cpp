#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main() {
    int n; 
    cin>>n;
    int m = 1;
    vector<string> ans = {"0", "1"};
    while(m != n) {
        vector<string> ans_tmp(2*(ans.size()));
        for(int i = 0; i<ans.size(); i++) {
            ans_tmp[i] = "0" + ans[i];
        }
        for(int i = ans.size() - 1; i>=0; i-- ) {
            ans_tmp[2*(ans.size()) - i - 1] = "1" + ans[i];
        }
        ans = ans_tmp;
        m++;
    }
    for(string x : ans) cout<<x<<endl;
}