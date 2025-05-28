#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    set<char> se;
    int maxi = 0;
    for (int i = 0; i < n;)
    {
        if (isupper(s[i]))
        {
            ++i;
            continue;
        }
        se.clear();
        while (i < n && islower(s[i]))
        {
            se.insert(s[i]);
            ++i;
        }
        maxi = max(maxi, (int)se.size()); //(int)se.size() casts the result from size_t to int
    }
    cout << maxi << endl;
}