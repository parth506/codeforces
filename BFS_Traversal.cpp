#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
void bfs(int i, vector<vector<int>> &adj, vector<int> &vis)
{
    queue<int> q;
    q.push(i);
    vis[i] = 1;
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        cout << it << " ";
        for (auto i : adj[it])
        {
            if (!vis[i])
            {
                vis[i] = 1;
                q.push(i);
            }
        }
    }
}

int main()
{
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

    int start;
    cin >> start;
    vector<int> vis(n + 1, 0);
    bfs(start, adj, vis);
}