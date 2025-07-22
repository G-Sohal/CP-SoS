#include<iostream>
#include<vector>
#define ll unsigned long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    char c;
    string s ="";
    vector<ll> v(26);
    while(cin>>c) {
        int index = int(c) - int('A');
        v[index]+=1;
        s+=c;
    }
    // cout<<s;
    bool done = false;
    ll len = s.size();
    vector<char> ans;
    int count = 0;
    char d;
    ll x;

    for(int i = 0; i<26; i++) {
        d = char('A' + i);
        x = v[i];
        if(x != 0) {
            if(x%2 == 1) count++;
            if(count>1) {
                done = true;
                cout<<"NO SOLUTION";
                break;
            }
            if(count && len%2==0) {
                done = true;
                cout<<"NO SOLUTION";
                break;
            }
            if(x%2 == 1) {
                ans.insert(ans.begin() + ans.size()/2, d);
                for(ll i = 0; i<(x-1)/2; i++) {
                    ans.push_back(d);
                    ans.insert(ans.begin(), d);
                }
            }
            else {
                for(ll i = 0; i<(x)/2; i++) {
                    ans.push_back(d);
                    ans.insert(ans.begin(), d);
                }
            }
        }
    }
    if(!done) for(char f : ans) cout<<f;
}