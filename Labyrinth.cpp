#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    pair<int, int> start, end;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> v[i][j];
            if (v[i][j] == 'A')
                start = {i, j};
            if (v[i][j] == 'B')
                end = {i, j};
        }
    }

    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    int dr[] = {1, 0, -1, 0};
    int dc[] = {0, -1, 0, 1};
    char dm[] = {'D', 'L', 'U', 'R'};

    queue<pair<int, int>> q;
    q.push(start);
    vis[start.first][start.second] = 1;
    bool found = false;

    while (!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        if (make_pair(r, c) == end)
        {
            found = true;
            break;
        }
        for (int i = 0; i < 4; ++i)
        {
            int nr = r + dr[i], nc = c + dc[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && !vis[nr][nc] && (v[nr][nc] == '.' || v[nr][nc] == 'B'))
            {
                vis[nr][nc] = 1;
                parent[nr][nc] = {r, c};
                q.push({nr, nc});
            }
        }
    }

    if (found)
    {
        string path = "";
        pair<int, int> cur = end;
        while (cur != start)
        {
            pair<int, int> p = parent[cur.first][cur.second];
            for (int i = 0; i < 4; ++i)
            {
                if (p.first + dr[i] == cur.first && p.second + dc[i] == cur.second)
                {
                    path += dm[i];
                    break;
                }
            }
            cur = p;
        }
        reverse(path.begin(), path.end());
        cout << "YES\n"
             << path.size() << "\n"
             << path << endl;
    }
    else
    {
        cout << "NO\n";
    }
    // Your code
}
