#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    multiset<int> ms;
    for (auto it : v)
    {
        auto x = ms.upper_bound(it);
        // cout << '(' << *x << ')';
        if (x != ms.end())
        {
            ms.erase(x);
        }
        ms.insert(it);
    }
    cout << ms.size() << endl;
}