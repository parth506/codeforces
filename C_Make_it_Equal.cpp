#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> S(n), T(n);
        for (int i = 0; i < n; i++)
            cin >> S[i];
        for (int i = 0; i < n; i++)
            cin >> T[i];

        sort(S.begin(), S.end());
        sort(T.begin(), T.end());

        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if (S[i] % k != T[i] % k)
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}
