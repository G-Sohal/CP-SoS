#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll maxx(ll i, ll j, ll k) {
    return max(i, max(j, k));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--) {
        ll n, m, a, b;
        cin>>n>>m>>a>>b;
        ll turns = 0;
        while(n!=1 || m!=1) {
            // in rows - a-1; n-a;
            // in cols - b-1; m-b;
            // Mouf di turn
            if(m>=n) {
                if((n-a)*m>=maxx((a-1)*m, (b-1)*n, (m-b)*n)) {
                    n = a;
                }
                else if((a-1)*m>=maxx((n-a)*m, (b-1)*n, (m-b)*n)) {
                    n = n-a+1;
                }
                else if((m-b)*n>=maxx((a-1)*m, (b-1)*n, (n-a)*m)) {
                    m = b;
                }
                else {
                    m = m-b+1;
                }
            }
            else {
                if((m-b)*n>=maxx((a-1)*m, (b-1)*n, (n-a)*m)) {
                    m = b;
                }
                else if((b-1)*n>=maxx((n-a)*m, (a-1)*m, (m-b)*n)) {
                    m = m-b+1;
                }
                else if((n-a)*m>=maxx((a-1)*m, (b-1)*n, (m-b)*n)) {
                    n = a;
                }
                else {
                    n = n-a+1;
                }
            }
            
            // Fouad di turn
            a = (n+1)/2;
            b = (m+1)/2;
            // update turn
            turns++;
        }
        cout<<turns<<endl;
    }
}