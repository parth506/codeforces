#include <bits/stdc++.h>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &adj, int i, vector<int> &vis)
{
    int n = adj.size();
    vis[i] = 1;
    cout << i << " ";
    for (auto it : adj[i])
    {
        if (!vis[it])
        {
            dfs(adj, it, vis);
        }
    }
}
int main()
{
    int n, d;
    cin >> n >> d;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < d; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int start;
    cin >> start;
    vector<int> vis(n + 1);
    dfs(adj, start, vis);
}