#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n / 2; ++i)
        {
            if (s[i] == s[n - i - 1])
            {
                ++c;
            }
        }
        if (c == k)

        {
            cout << "YES\n";
        }

        else if ((c - k) % 2 == 0)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}