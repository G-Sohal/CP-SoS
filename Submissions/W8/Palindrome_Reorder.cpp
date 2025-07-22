#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> freq(26, 0);
    char c;
    ll len = 0;
    while(cin >> c) {
        freq[c - 'A']++;
        len++;
    }
    int odd= 0;
    for(int z : freq) {
        if(z%2) odd++;
        if((len%2==0 && odd>0) || (odd > 1)) {
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }        
    }
    string ans = "";
    for(int i=0; i<26; i++) {
        if(freq[i]%2 == 0) {
            string z((freq[i])/2, (char)('A' + i));
            ans += z;
        }
    }
    for(int i=0; i<26; i++) {
        if(freq[i]%2 == 1) {
            string z((freq[i]), (char)('A' + i));
            ans += z;
        }
    }
    for(int i=25; i>=0; i--) {
        if(freq[i]%2 == 0) {
            string z((freq[i])/2, (char)('A' + i));
            ans += z;
        }
    }
    cout<<ans<<endl;
}