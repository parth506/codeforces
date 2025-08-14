#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    long long sum = 0;
    long long maxsum = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        if (sum + v[i] < 0)
        {
            sum = 0;
            maxsum = max(maxsum, sum + v[i]);
            continue;
        }
        sum += v[i];
        maxsum = max(maxsum, sum);
    }
    cout << maxsum << endl;
    return 0;
}