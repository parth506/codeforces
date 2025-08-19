#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    unordered_map<int, int> mpp;
    int l = 0, r = 0;
    long long sum = 0;
    while (l < n)
    {
        mpp.clear();
        r = 0;
        while (r < n)
        {   

            if (mpp.find(v[r]) != mpp.end())
            {
                continue;
            }
            mpp[v[r]]++;

            sum += 1;
            ++r;
        }
        ++l;
    }
    cout << sum << endl;
}