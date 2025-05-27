#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x, y;
    cin >> x >> y;
    int n = x.size();
    // min(x[i],z[i])=y[i]
    string z;
    z = x;

    for (int i = 0; i < n; ++i)
    {
        if (y[i] > x[i])
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            z[i] = min(x[i], y[i]);
        }
    }
    cout << z << endl;
}