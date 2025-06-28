#include <bits/stdc++.h>
using namespace std;

void substrings(string &s)
{
    int n = s.size();
    string p = "";
    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            p = s.substr(i, 2);
            cout << p << endl;
            return;
        }
    }
    for (int i = 0; i < n - 2; ++i)
    {
        if (s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2])
        {
            p = s.substr(i, 3);
            cout << p << endl;
            return;
        }
    }

    cout << -1 << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // string ans = "";
        // int n = s.size();
        // int flag = 0;
        substrings(s);
    }
}