#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &adj, vector<int> &vis, int node)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(adj, vis, it);
        }
    }
}
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
    vector<int> vis(n + 1, 0);
    vector<vector<int>> ans;
    vector<int> res;
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {

        if (!vis[i])
        {
            res.push_back(i);
            dfs(adj, vis, i);

            cnt++;
        }
    }
    for (int i = 0; i < res.size() - 1; ++i)
    {
        ans.push_back({res[i], res[i + 1]});
    }

    // if (m >= n - 1)
    // {
    //     cout << 0 << endl;
    //     return 0;
    // }
    cout << cnt - 1 << endl;
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }

    // Your code here for the "Building Roads"
}