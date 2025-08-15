#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b)
         { return a.second < b.second; });

    // for (int i = 0; i < n; ++i)
    // {
    //     cout << v[i].first << " " << v[i].second;
    //     cout << endl;
    // }
    int cnt = 0;
    long long c = 0;
    for (auto it : v)
    {
        if (it.first >= c)
        {
            cnt++;
            c = it.second;
        }
    }
    cout << cnt << endl;
}