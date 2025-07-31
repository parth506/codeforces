#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 1);
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    vector<int> res(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        if (res[i] == 0)
        {
            queue<int> q;
            q.push(i);
            res[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                for (auto it : v[node])
                {
                    if (res[it] == 0)
                    {
                        res[it] = 3 - res[node];
                        q.push(it);
                    }
                    else if (res[it] == res[node])
                    {
                        cout << "IMPOSSIBLE" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << res[i] << " ";
    }
    // Your code here for the "Building Teams" problem

    return 0;
}