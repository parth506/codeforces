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

    long long l = 0;
    long long r = 0;
    long long sum = 0;
    long long ans = 0;
    while (r < n)
    {
        sum |= (long long)v[r];
        if (r - l + 1 > k)
        {
            sum |= (long long)v[l];
            ++l;
        }
        if (r - l + 1 == k)
        {
            ans ^= sum;
        }
        ++r;
    }
    cout << ans << endl;
}