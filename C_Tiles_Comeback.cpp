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
        int first = v[0];
        int last = v[n - 1];
        int fc = 0, lc = 0;
        int c = count(v.begin(), v.end(), first);
        if (first == last)
        {
            if (c >= k)
            {

                cout << "YES\n";
            }
        }

        else
        {
            for (int i = 0; i <= n / 2; ++i)
            {
                if (v[i] == first)
                    ++fc;
                if (v[n - i - i] == last)
                    ++lc;
            }
            if (fc >= k && lc >= k)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}