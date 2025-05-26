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
        vector<int> v(n);
        int c = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] == 2)
                ++c;
        }
        int k = -1;
        int c1 = 0;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 2)
            {
                --c;
                ++c1;
            }
            if (c1 == c)
            {
                k = i + 1;
                break;
            }
        }
        cout << k << endl;
    }
}