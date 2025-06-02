#include <bits/stdc++.h>
using namespace std;

bool prime[100];

void solve()
{
    int k;

    cin >> k;
    string s;
    cin >> s;
    for (int i = 0; i < k; ++i)
    {
        if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
        {
            cout << 1 << endl;
            cout << s[i] << endl;
            return;
        }
    }
    for (int i = 0; i < k; ++i)
    {
        for (int j = i + 1; j < k; ++j)
        {
            if (!prime[10 * (s[i] - '0') + (s[j] - '0')])
            {
                cout << 2 << endl;
                cout << s[i] << s[j] << endl;
                return;
            }
        }
    }

    exit(42);
}
int main()
{
    for (int i = 2; i < 100; ++i)
    {
        prime[i] = true;
        for (int j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                prime[i] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}