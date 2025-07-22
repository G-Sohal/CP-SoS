#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; cin>>s;
    int n = s.length();
    int i=0; 
    int j=n-1;
    vector<int> ans;
    while(i< j) {
        while(i < n && s[i] == ')') i++;
        while(j >=0 && s[j] == '(') j--;
        if(i < j && i<n && j>=0) { 
            ans.push_back(i);
            ans.push_back(j);
            i++;
            j--;
        }

    }
    if(ans.empty()) cout<<"0 \n";
    else {
        cout<<"1 \n";
        cout<<ans.size()<<endl;
        sort(ans.begin(), ans.end());
        for(int z : ans) cout<<(z+1)<<" ";
        cout<<endl;
    }
    
}