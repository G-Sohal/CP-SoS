#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int max_val = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] > max_val) {
                    max_val = a[i][j];
                }
            }
        }

        vector<int> row_cnt(n), col_cnt(m);
        int k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == max_val) {
                    row_cnt[i]++;
                    col_cnt[j]++;
                    k++;
                }
            }
        }

        vector<int> rows, cols;
        for (int i = 0; i < n; i++) {
            if (row_cnt[i] > 0) {
                rows.push_back(i);
            }
        }
        for (int j = 0; j < m; j++) {
            if (col_cnt[j] > 0) {
                cols.push_back(j);
            }
        }

        bool cross = false;
        for (int r : rows) {
            if (row_cnt[r] == k) {
                cross = true;
                break;
            }
        }
        for (int c : cols) {
            if (!cross && col_cnt[c] == k) {
                cross = true;
                break;
            }
        }

        if (!cross) {
            for (int r : rows) {
                for (int c : cols) {
                    int subtract = 0;
                    if (a[r][c] == max_val) {
                        subtract = 1;
                    }
                    int covered = row_cnt[r] + col_cnt[c] - subtract;
                    if (covered == k) {
                        cross = true;
                        break;
                    }
                }
                if (cross) {
                    break;
                }
            }
        }

        if (cross) {
            cout << max_val - 1 << "\n";
        } else {
            cout << max_val << "\n";
        }
    }

    return 0;
}
