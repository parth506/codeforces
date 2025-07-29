#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

struct S
{
    int x, y, d, g;
    S(int x, int y, int d, int g) : x(x), y(y), d(d), g(g) {}
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    int dx, dy;
    cin >> dx >> dy;
    int k;
    cin >> k;
    set<pair<int, int> > b;
    for (int i = 0; i < k; ++i)
    {
        int x, y;
        cin >> x >> y;
        b.insert({x, y});
    }

    if (a[0][0] == 0 || a[dx][dy] == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    vector<vector<int> > d(n, vector<int>(m, -1));
    vector<vector<int> > g(n, vector<int>(m, -1));
    queue<S> q;
    int st = 0;
    if (a[0][0] == 1 && !b.count({0, 0}))
        st = 1;
    d[0][0] = 0;
    g[0][0] = st;
    q.push(S(0, 0, 0, st));

    int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    while (!q.empty())
    {
        S s = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int nx = s.x + dir[i][0];
            int ny = s.y + dir[i][1];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;
            if (a[nx][ny] == 0)
                continue;
            int ag = 0;
            if (a[nx][ny] == 1 && !b.count({nx, ny}))
                ag = 1;
            int nd = s.d + 1;
            int ng = s.g + ag;
            if (d[nx][ny] == -1 || nd < d[nx][ny])
            {
                d[nx][ny] = nd;
                g[nx][ny] = ng;
                q.push(S(nx, ny, nd, ng));
            }
        }
    }

    if (d[dx][dy] == -1)
        cout << 0 << endl;
    else
        cout << g[dx][dy] << endl;

    return 0;
}