#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector<int> v(n + 1, 1);
    long long ans = 1;
    int mod = 1e9 + 7;
    for (int i = 1; i < n; ++i)
    {
        ans = ((ans) * (long long)2) % mod;
    }
    cout << ans << endl;
}
