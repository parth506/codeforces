#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    queue<int> q; // pq
    q.push(v[0]);
    int i = 1;
    while (i < n)
    {
        int a = q.front();
        q.pop();
        if (v[i] > a)
        {
            q.push(v[i]);
            q.push(a);
        }
        else
        {
            q.push(v[i]);
        }
        ++i;
    }
    cout << q.size();
}