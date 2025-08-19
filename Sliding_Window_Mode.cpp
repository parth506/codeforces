#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    map<int, int> mpp;
    vector<int> ans;
    int cnt = 0;
    int l = 0, r = 0;
    int dsa = 0;
    int das = 0;
    while (r < n)
    {
        mpp[v[r]]++;

        cnt++;
        if (cnt > k)
        {
            cnt--;
            mpp[v[l]]--;

            ++l;
        }

        if (cnt == k)
        {
            dsa = 0;
            for (auto it : mpp)
            {
                if (it.second > dsa)
                {
                    dsa = it.second;
                    das = it.first;
                }
            }
            ans.push_back(das);
        }
        ++r;
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
}