#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x, k, a, b, c;
    cin >> n >> k >> x >> a >> b >> c;

    vector<long long> v(n);
    v[0] = x;
    for (long long i = 1; i < n; ++i)
    {
        v[i] = (a * v[i - 1] + b) % c;
    }

    long long ans = 0;
    deque<long long> dq;

    for (int i = 0; i < n; ++i)
    {
        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while (!dq.empty() && v[dq.back()] >= v[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1)
        {
            ans ^= v[dq.front()];
        }
    }

    cout << ans << endl;
}