#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<vector<int>> p(n, vector<int>(2));
    set for (int i = 0; i < n; ++i)
    {
        int c;
        cin >> c;
        p[i][0] = (c);
        p[i][1] = (i + 1);
    }
    int c = 0;
    vector<int> v;
    for (int i = 0; i < n - 1; ++i)
    {
        c = s[i];
        int t = i + 1;
        while (t < n)
        {
            if (x - c == s[t])
            {
                v.push_back(i + 1);
                v.push_back(t + 1);
                break;
            }
            ++t;
        }
    }
    if (v.size() == 2)
        cout << v[0] << " " << v[1];
    else
    {
        cout << "IMPOSSIBLE";
    }
}