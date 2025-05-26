#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<long long> v(t);
    for (int i = 0; i < t; ++i)
    {
        cin >> v[i];
    }
    int maxi = 0;
    int c = 1;
    for (int i = 0; i < t - 1; ++i)
    {
        if (v[i] < v[i + 1])
        {
            ++c;
        }
        else
        {
            c = 1;
        }
        maxi = max(maxi, c);
    }
    cout << maxi << endl;
}