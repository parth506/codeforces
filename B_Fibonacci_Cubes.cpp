#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> fib(11);
    fib[1] = 1;
    fib[2] = 2;
    for (int i = 3; i <= 10; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> cubes(fib.begin() + 1, fib.begin() + n + 1);
        sort(cubes.rbegin(), cubes.rend());

        string result;
        for (int i = 0; i < m; ++i)
        {
            int w, l, h;
            cin >> w >> l >> h;

            bool filled = false;
            vector<vector<vector<bool>>> box(w, vector<vector<bool>>(l, vector<bool>(h, false)));

            for (int cube : cubes)
            {
                float count_w = w / cube;
                float count_l = l / cube;
                float count_h = h / cube;

                if (count_w == 0 || count_l == 0 || count_h == 0)
                    continue;

                filled = true;
                break;
            }

            result += filled ? '1' : '0';
        }
        cout << result << '\n';
    }

    return 0;
}
