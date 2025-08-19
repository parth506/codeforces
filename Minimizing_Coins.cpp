#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i)
        cin >> v[i];

    vector<ll> dp(x + 1, INT_MAX);
    dp[0] = 0;
    for (ll i = 1; i <= x; ++i)
    {
        for (auto c : v)
        {
            if (i - c >= 0)
                dp[i] = min(dp[i], dp[i - c] + 1);
        }
    }
    // cout << dp[x] << endl;
    dp[x] == INT_MAX ? cout << -1 << endl : cout << dp[x] << endl;
}
