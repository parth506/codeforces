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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int c = 1;
        for (int i = 1; i < n; ++i)
        {
            if (a[i - 1] + 1 < a[i])
                ++c;
        }
        cout << c << endl;
    }
    return 0;
}