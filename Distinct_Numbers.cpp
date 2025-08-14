#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<long long> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.insert(x);
        }
    cout << v.size() << endl;
}