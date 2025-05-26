#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);
        map<int, int> mpp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            mpp[v[i]]++;
        }

        int maxi = 0;
        for (auto it : mpp)
        {

            maxi = max(maxi, it.second);
        }
        cout << n - maxi << endl;
    }
}