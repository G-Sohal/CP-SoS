#include<iostream>
#include<cmath>
using namespace std;
int main() {
    long long n; cin>>n;
    if(n%4 == 0) {
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        int tmp = 1;

        for(int i = 1; i<=n; i++) {
            if(tmp%4 == 1) cout<<i<<" ";
            if(tmp%4 == 0) {
                cout<<i<<" ";
                tmp = 0;
            }
            tmp++;
        }
        cout<<endl;
        cout<<n/2<<endl;
        for(int i = 1; i<=n; i++) {
            if(tmp%4 == 2) cout<<i<<" ";
            if(tmp%4 == 3) cout<<i<<" ";            
            if(tmp%4 == 0) {
                tmp = 0;
            }
            tmp++;
        }
        
    }
    else if((n+1)%8 == 0) {
        cout<<"YES"<<endl;
        cout<<(n+1)/2 <<endl;
        long long x = 4*((n+1)/8 - 1) + 2;
        long long y = x + 2;
        long long z = x + 4;
        int tmp = 1;
        // cout<<x<<" "<<y<<" "<<z<<endl;
        for(int i = 1; i<=n; i++) {
            if(i != y) {
                if(i == x) cout<<i<<" ";
                if(i == z) cout<<i<<" ";
                else if(tmp%4 == 1) {
                    cout<<i<<" ";
                }
                else if(tmp%4 == 0) {
                    cout<<i<<" ";
                    tmp = 0;
                }
            }
            tmp ++;
        }
        cout<<endl;
        cout<<(n+1)/2 - 1<<endl;
        tmp = 1;
        for(int i = 1; i<=n; i++) {
            if(i != x && i!= z) {
                if(i == y) cout<<i<<" ";
                else if(tmp%4 == 2) {
                    cout<<i<<" ";
                }
                else if(tmp%4 == 3) {
                    cout<<i<<" ";
                }
            }
            else if(tmp%4 == 0) tmp = 0;
            tmp ++;
        }
        
    }
    else if((n+1)%8 == 4) {
        cout<<"YES"<<endl;
        cout<<(n + 1)/2<<endl;
        int tmp = 1;
        for(int i = 1; i<=n; i++) {
            if(i == (n + 1)/2) cout<<i<<" ";
            else if(tmp%4 == 1) {
                cout<<i<<" ";
            }
            else if(tmp%4 == 0) {
                cout<<i<<" ";
                tmp = 0;
            }
            tmp ++;
        }
        
        cout<<endl;
        cout<<(n-1)/2<<endl;
        tmp = 1;
        for(int i = 1; i<=n; i++) {
            if(i != (n + 1)/2) {
                if(tmp%4 == 2) {
                    cout<<i<<" ";
                }
                else if(tmp%4 == 3) {
                    cout<<i<<" ";
                }
                else if(tmp%4 == 0) {
                    tmp = 0;
                }
            }
            tmp ++;
        }
        
    }
    else cout<<"NO"<<endl;
}