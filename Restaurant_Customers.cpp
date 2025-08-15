#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> starts(n), ends(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> starts[i] >> ends[i];
    }
    sort(starts.begin(), starts.end());
    sort(ends.begin(), ends.end());

    int i = 0, j = 0, curr = 0, max_overlap = 0;
    while (i < n && j < n)
    {
        if (starts[i] < ends[j])
        {
            curr++;
            max_overlap = max(max_overlap, curr);
            i++;
        }
        else
        {
            curr--;
            j++;
        }
    }
    cout << max_overlap << endl;
    return 0;
}