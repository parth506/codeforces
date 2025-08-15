#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());
    vector<int> vis(n, 0);
    int l = 0, r = n - 1;
    int cnt = 0;
    while (l < r)
    {
        if (v[l] + v[r] <= x)
        {
            vis[l] = 1;
            vis[r] = 1;
            ++l;
            --r;
            cnt++;
        }
        else if (v[l] + v[r] > x)
        {
            --r;
        }
    }
    for (auto it : vis)
    {
        if (it == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}