#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define cint(n) int n; cin >> n;
typedef long long ll;

void fastio(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}

void solve(){
    int n = 8;
    string a, b;
    cin>>a>>b;
    queue<pair<pair<int, int>, int>> q;
    q.push({{a[0]-'a' , a[1] - '1'}, 0});
    while(!q.empty()) {
        pair v = q.front(); q.pop();
		auto c = v.first;
        int x = c.first; int y = c.second; int d = v.second;
        if(x > 1) {
            if(y > 1) {
                q.push({{x-2, y-1}, d+1});
                q.push({{x-1, y-2}, d+1});
            }
            else if(y == 1) {
                q.push({{x-2, y-1}, d+1});
            }

            if(y < (n-2)) {
                q.push({{x-2, y+1}, d+1});
                q.push({{x-1, y+2}, d+1});
            }
            else if(y == (n-2)) {
                q.push({{x-2, y+1}, d+1});
            }
        }
        else if(x==1) {
            if(y>1) q.push({{x-1, y-2}, d+1});

        }
    }
	cint(n); cint(r); cint(m);
	vector<vector<int>> adj(n);
	for (int i = 0; i < r; i++) {
		cint(a); cint(b);
		a--; b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	vector<int> protected_by(n, -1);
	vector<pair<int, int>> ss(m);

	for (int i = 0; i < m; i++) {
		cint(k); cint(s);
		k--;
		ss[i] = {k, s};
	}

	for (int i = 0; i < m; i++) {
		int k = ss[i].first;
		int s = ss[i].second;

		queue<pair<int, int>> q;
		q.push({k, 0});

		if (protected_by[k] != -1) {
			cout<<"No"<<endl;
			return;
		}

		protected_by[k] = i;

		while (!q.empty()) {
			auto [v, dist] = q.front(); q.pop();
			if (dist == s) continue;

			for (int u : adj[v]) {
				if (protected_by[u] == -1) {
					protected_by[u] = i;
					q.push({u, dist + 1});
				}
				else if (protected_by[u] != i) {
					cout<<"No"<<endl;
					return;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (protected_by[i] == -1) {
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
}

int main(){
	fastio();
	int t; cin >> t;
	while(t--) solve();
}