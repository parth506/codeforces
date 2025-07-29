#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, const vector<vector<int>> &adj, vector<bool> &visited)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                // visited[neighbor] = true;
                // q.push(neighbor);
                bfs(neighbor, adj, visited);
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

    vector<bool> visited(n + 1, false);
    int start;
    // cout << "Enter starting node: ";
    cin >> start;

    // cout << "BFS Traversal: ";
    bfs(start, adj, visited);
    cout << endl;

    return 0;
}