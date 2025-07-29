#include <bits/stdc++.h>
using namespace std;
struct eater
{
    int wait;
    int ate;
    void init()
    {
        ate = wait = 0;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    eater a, b;
    a.init();
    b.init();

    int n;
    cin >> n;
    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        q.push_back(t);
    }

    while (!q.empty())
    {
        if (a.wait != 0)
        {
            a.wait--;
        }
        if (b.wait != 0)
        {
            b.wait--;
        }
        if (a.wait == 0)
        {
            a.wait = q.front();
            ++a.ate;
            q.pop_front();
        }
        if (b.wait == 0)
        {
            if (!q.empty())
            {
                b.wait = q.back();
                ++b.ate;
                q.pop_back();
            }
            else
            {
                break; // If no chocolates left, Bob waits indefinitely
            }
        }
    }
    cout << a.ate << " " << b.ate << endl;
    return 0;
}