#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<vector<int>> p(n, vector<int>(2));
    for (int i = 0; i < n; ++i)
    {
        int c;
        cin >> c;
        p[i][0] = (c);
        p[i][1] = (i + 1);
    }
    sort(p.begin(), p.end());
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        if (p[l][0] + p[r][0] == x)
        {
            if (p[l][1] > p[r][1])
            {
                cout << p[r][1] << " " << p[l][1];
            }
            else
            {
                cout << p[l][1] << " " << p[r][1];
            }
            return 0;
        }
        else if (p[l][0] + p[r][0] > x)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}