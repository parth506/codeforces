#include <bits/stdc++.h>
using namespace std;

const int sqrt_lim = 1000001;

set<long long> prime_squares()
{
    static bool arr[sqrt_lim];

    for (int i = 2; i * i < sqrt_lim; i++)
    {
        if (!arr[i])
        {
            for (int j = i * i; j < sqrt_lim; j += i)
            {
                arr[j] = true;
            }
        }
    }

    set<long long> res;
    for (int i = 2; i < sqrt_lim; i++)
    {
        if (!arr[i])
            res.insert((long long)i * i);
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    set<long long> div(prime_squares());
    for (int i = 0; i < n; ++i)
    {
        long long num;
        cin >> num;
        if (div.find(num) != div.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
