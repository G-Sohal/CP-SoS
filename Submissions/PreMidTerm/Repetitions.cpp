#include<iostream>
#include<vector>
using namespace std;

int main() {
    char c;
    vector<char> s;
    while(cin>>c) {
        s.push_back(c);
    }
    long long count = 1;
    long long maxcount = 1;
    for(int i=1; i<s.size(); i++) {
        if(s[i] == s[i-1]) {
            count++;
        }
        else {
            maxcount = max(maxcount, count);
            count = 1;
        }
        if(i == (s.size()-1)) {
            maxcount = max(maxcount, count);
        }
    }
    cout<<maxcount<<endl;
}