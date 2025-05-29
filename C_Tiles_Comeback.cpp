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
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int left = 0, right = 0, i = 0, j = n - 1;
        int k_left = k, k_right = k;

        if (v[i] == v[j])
        {
            k_left = k / 2;
            k_right = k - k_left;
        }
        for (; i < n && left < k_left; ++i)
        {
            if (v[i] == v[0])
                ++left;
        }
        for (; j >= 0 && right < k_right; --j)
        {
            if (v[j] == v[n - 1])
                ++right;
        }

        (i - 1 < j + 1) ? cout << "YES\n" : cout << "NO\n";
    }
}