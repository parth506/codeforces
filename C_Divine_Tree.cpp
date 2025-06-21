#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        long long min_sum = n;
        long long max_sum = n * (n + 1) / 2;

        if (m < min_sum || m > max_sum)
        {
            cout << -1 << '\n';
            continue;
        }

        cout << 1 << '\n'; // Let's root the tree at node 1

        vector<int> parent(n + 1, 0);
        vector<int> level_nodes = {1}; // root at level 0
        int next_node = 2;
        long long current_sum = 1;

        for (int depth = 1; next_node <= n; ++depth)
        {
            vector<int> next_level;

            for (int u : level_nodes)
            {
                if (next_node > n)
                    break;
                parent[next_node] = u;
                current_sum += 1;
                next_level.push_back(next_node);
                ++next_node;
            }

            level_nodes = next_level;
        }

        long long needed = m - current_sum;

        // Try to "upgrade" divineness by re-parenting nodes
        for (int i = n; i >= 2 && needed > 0; --i)
        {
            int curr = parent[i];
            while (curr != 1 && needed > 0)
            {
                parent[i] = parent[curr]; // jump one level up
                needed--;
                curr = parent[i];
            }
        }

        for (int i = 2; i <= n; ++i)
        {
            cout << parent[i] << " " << i << '\n';
        }
    }

    return 0;
}
