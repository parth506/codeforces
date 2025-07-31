#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> vis(n + 1, 0), parent(n + 1, -1);
    queue<int> q;
    q.push(1);
    vis[1] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                parent[it] = node;
                q.push(it);
            }
        }
    }

    if (!vis[n])
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    vector<int> path;
    // path tracing
    for (int v = n; v != -1; v = parent[v])
    {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());
    cout << path.size() << endl;
    for (int v : path)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}