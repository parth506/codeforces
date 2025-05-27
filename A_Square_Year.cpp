#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    int root = sqrt(num);
    return root * root == num;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = stoi(s.substr(0, 2));
        int b = stoi(s.substr(2, 4));
        long long e = (a + b) * (a + b);
        if (e == stoi(s.substr(0, 4)))
        {
            cout << a << " " << b << endl;
        }
        else if (isPerfectSquare(stoi(s.substr(0, 4))))
        {
            a = sqrt(stoi(s.substr(0, 4))) / 2;
            b = sqrt(stoi(s.substr(0, 4))) - a;
            cout << a << " " << b << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}