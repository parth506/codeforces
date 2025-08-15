#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin(), v.end());
    int a = v[n / 2];
    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += (long long)abs(v[i] - a);
    }
    cout << sum << endl;
}