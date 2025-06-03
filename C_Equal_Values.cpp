#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        unordered_map<int, vector<int>> pos;

        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            pos[a[i]].push_back(i);
        }

        int min_cost = LLONG_MAX;

        for (auto &[val, indices] : pos)
        {
            int total = 0;
            int last = 0;

            for (int idx : indices)
            {
                if (last == 0 || idx > last + 1)
                {
                    // Need to start a new operation (segment)
                    total += val;
                }
                last = idx;
            }

            min_cost = min(min_cost, total * 1LL); // total cost is number of operations * val
        }

        cout << min_cost << '\n';
    }

    return 0;
}
