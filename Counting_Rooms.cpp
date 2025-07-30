#include <bits/stdc++.h>
using namespace std;

void dfs(queue<pair<int, int>> &q, vector<vector<int>> &vis, vector<vector<char>> &v)
{
    int n = v.size();
    int m = v[0].size();
    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};
    while (!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        vis[r][c] = 1;
        for (int i = 0; i < 4; ++i)
        {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m && v[nr][nc] == '.' && vis[nr][nc] == 0)
            {
                vis[nr][nc] = 1;
                q.push({nr, nc});
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> vis(n, vector<int>(m, 0));
    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (v[i][j] == '.' && vis[i][j] == 0)
            {
                queue<pair<int, int>> q;
                q.push({i, j});
                dfs(q, vis, v);
                ++cnt;
            }
        }
    }
    cout << cnt << endl;
}