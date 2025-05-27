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
        if (y[i] == x[i] && y[i] != 'z')
        {
            z[i] = y[i] + 1;
        }
        else if (y[i] == x[i] && y[i] == 'z')
        {
            z[i] = y[i];
        }
        else if (y[i] == 'b' && x[i] == 'a')
        {
            cout << -1 << endl;
            return 0;
        }
        else if (y[i] != x[i])
        {
            z[i] = y[i];
        }
    }
    cout << z << endl;
}