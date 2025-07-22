#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long

ll absolute(ll a) {
    if (a < 0 ) return -a;
    else return a;
}

using namespace std;

int main() {
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> a;
    vector<ll> b;
    ll x;
    for(ll i=0; i<n; i++) {
        cin>>x;
        a.push_back(x);
    }
    for(ll i=0; i<m; i++) {
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    ll count = 0;

    ll i = 0; ll j = 0;
    while(i<n && j<m) {
        if(abs(a[i] - b[j]) <= k) {
            i++; j++;
            count++;
        }
        else {
            if (a[i] - b[j] > k) {
				j++;
			}
            else i++;
        }
    }
    cout<<count<<endl;
}