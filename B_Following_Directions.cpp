#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string v;
        int x = 0, y = 0;
        int c = 0;
        cin >> v;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 'U')
                ++y;
            else if (v[i] == 'D')
                --y;
            else if (v[i] == 'R')
                ++x;
            else if (v[i] == 'L')
                --x;

            if (x == 1 && y == 1)
            {
                c = 1;
                break;
            }
        }
        c == 1 ? cout << "YES\n" : cout << "NO\n";
    }
}