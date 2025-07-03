#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 2; i <= 1000; ++i)
    {
        bool is_prime = true;
        for (int j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            v.push_back(i);
        }
    }

    int n, k;
    cin >> n >> k;
    int num = 0;

    for (int i = 0; i < v.size(); ++i)
    {

        int p = v[i] + v[i + 1] + 1;
        if (p <= n)
        {
            if (binary_search(v.begin(), v.end(), p))
            {
                // cout << p << " ";
                ++num;
            }
        }
        else
        {
            break;
        }
    }
    // cout << endl;
    if (num >= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
