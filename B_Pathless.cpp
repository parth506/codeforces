#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int tot = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            tot += a[i];
        }
        if (s > tot)
        {
            for (int i = 0; i < n; ++i)
                cout << a[i] << " ";
            cout << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}