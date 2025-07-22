#include <iostream>
#include <vector>
using namespace std;

#define ll long long

// Movement directions
int dx[256], dy[256];

void setup_directions() {
    dx['U'] = -1; dy['U'] = 0;
    dx['D'] = 1;  dy['D'] = 0;
    dx['L'] = 0;  dy['L'] = -1;
    dx['R'] = 0;  dy['R'] = 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    setup_directions();

    ll t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m));
        vector<vector<bool>> done(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];

        int main_count = 0;

        // Traverse all non-? cells following arrow paths
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != '?' && !done[i][j]) {
                    int x = i, y = j;
                    int count = 0;
                    while (true) {
                        if (x < 0 || x >= n || y < 0 || y >= m || done[x][y])
                            {count=0; break;}
                        if(grid[x][y] == '?') break;
                        done[x][y] = true;
                        count++;
                        int nx = x + dx[grid[x][y]];
                        int ny = y + dy[grid[x][y]];
                        x = nx;
                        y = ny;
                    }
                    if(count) cout<<i<<j<<" : ";
                    main_count += count;
                }
            }
        }
        cout<<main_count<<endl;
        // Process '?' cells that might be reachable
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '?' && !done[i][j]) {
                    bool reachable = false;

                    if (i > 0 && (grid[i - 1][j] == 'D' || grid[i - 1][j] == '?')) reachable = true;
                    if (i + 1 < n && (grid[i + 1][j] == 'U' || grid[i + 1][j] == '?')) reachable = true;
                    if (j > 0 && (grid[i][j - 1] == 'R' || grid[i][j - 1] == '?')) reachable = true;
                    if (j + 1 < m && (grid[i][j + 1] == 'L' || grid[i][j + 1] == '?')) reachable = true;

                    if (reachable)
                        main_count++;
                }
            }
        }

        cout << main_count << '\n';
    }

    return 0;
}
