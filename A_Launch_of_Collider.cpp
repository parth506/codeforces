#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<long long> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int mini = INT_MAX;

    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            int d = (v[i + 1] - v[i]) / 2;
            mini = min(mini, d);
        }
    }

    if (mini == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << mini << endl;
    }
    return 0;
}