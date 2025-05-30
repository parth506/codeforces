#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int k = ((a + b - 1) % n + n) % n + 1;

    cout << k << endl;
}