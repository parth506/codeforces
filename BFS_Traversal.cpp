#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int s, vector<vector<int>> &adj, vector<int> &vis)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}

int main()
{
    int n, m;
    // cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    //
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    vector<int> visited(n + 1, 0);
    int start;
    // cout << "Enter starting node: ";
    cin >> start;

    // cout << "BFS Traversal: ";
    bfs(start, adj, visited);
    cout << endl;

    return 0;
}