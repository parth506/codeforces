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

        vector<int> a(n);
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] == 0)
                ++cnt;
        }

        int sum = 0;
        for (int x : a)
            sum += x;

        cout << sum + cnt << '\n';
    }
    return 0;
}