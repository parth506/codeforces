#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int cnt = count(v.begin(), v.end(), 0);
    if (n == 1)
        (cnt == 1) ? cout << "NO\n" : cout << "YES\n";
    else
        (cnt == 1) ? cout << "YES\n" : cout << "NO\n";
}