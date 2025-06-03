#include <iostream>
using namespace std;

int min_actions(int x)
{
    int steps = 0;
    while (x > 0)
    {
        steps++;
        x /= 2;
    }
    return steps * 2 - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << min_actions(x) + 2 << "\n";
    }
    return 0;
}
