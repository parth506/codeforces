#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> m;
    for (auto i : s)
    {
        m[i]++;
    }
    int ans = m['B'];
    ans = min(ans, m['u'] / 2);
    ans = min(ans, m['l']);
    ans = min(ans, m['b']);
    ans = min(ans, m['a'] / 2); // since if 3 then 2 not possible
    ans = min(ans, m['s']);
    ans = min(ans, m['r']);
    cout << ans << endl;
}