#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (int i = 0; i < 26; ++i)
    {
        m['a' + i] = i + 1;
    }

    vector<int> p(n + 1, 0);
    // p[0] = 0;
    for (int i = 0; i < n; ++i)
    {
        p[i + 1] = p[i] + m[s[i]];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << p[r] - p[l - 1] << endl;
    }
}