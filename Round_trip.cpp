#include <bits/stdc++.h>
using namespace std;

int cycle_start = -1, cycle_end = -1;

bool dfs(int node, int par, vector<vector<int>> &adj, vector<int> &vis, vector<int> &parent)
{
    vis[node] = 1;
    for (int to : adj[node])
    {
        if (to == par)
            continue;
        if (vis[to])
        {
            cycle_end = node;
            cycle_start = to;
            return true;
        }
        parent[to] = node;
        if (dfs(to, node, adj, vis, parent))
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<int> parent(n + 1, -1), vis(n + 1, 0);

    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i] && dfs(i, -1, adj, vis, parent))
            break;
    }

    if (cycle_start == -1)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        vector<int> cycle;
        cycle.push_back(cycle_start);
        for (int x = cycle_end; x != cycle_start; x = parent[x])
            cycle.push_back(x);
        cycle.push_back(cycle_start);
        reverse(cycle.begin(), cycle.end());
        cout << cycle.size() << "\n";
        for (int x : cycle)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}