#include <iostream>
#include <unordered_set>
using namespace std;

int getFinalPosition(int coord, int dir, int tableSize)
{
    int dist = dir == 1 ? tableSize - coord : coord;
    return dist;
}

bool willPot(int x, int y, int dx, int dy, int s)
{
    int tx = getFinalPosition(x, dx, s);
    int ty = getFinalPosition(y, dy, s);
    return tx == ty;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            int dx, dy, x, y;
            cin >> dx >> dy >> x >> y;
            if (willPot(x, y, dx, dy, s))
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
