#include <bits/stdc++.h>
using namespace std;
vector<int> trees[2001];

int longest(int node, int depth)
{
    int maxi_ = depth;
    for (int c : trees[node])
    {
        maxi_ = max(maxi_, longest(c, depth + 1));
    }
    return maxi_;
}
int main()
{
    int n;
    cin >> n;
    vector<int> roots;
    for (int i = 1; i <= n; ++i)
    {
        int pi;
        cin >> pi;
        if (pi == -1)
            roots.push_back(i);
        else
            trees[pi].push_back(i);
    }
    int maxi = 0;
    for (auto root : roots)
    {
        maxi = max(maxi, longest(root, 1));
    }
    cout << maxi << endl;
}