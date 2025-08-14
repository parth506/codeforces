#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> isPrime(1e5 + 5, 1);
    // vector<int> divisors[m];
    vector<int> color;
    isPrime[0] = isPrime[1] = 0;

    // for (int i = 2; i <= n + 1; ++i)
    // {
    //     for (int j = i; j <= n + 1; j += i)
    //     {
    //         divisors[j].push_back(i);
    //     }
    //     // // if(isPrime[i]){
    //     //     for(int j=2*i ; j<m ;j+=i){
    //     //         isPrime[j]=0;
    //     //     }
    //     // }
    // }
    for (int i = 2; i <= n + 1; ++i)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n + 1; j = j + i)
            {
                isPrime[j] = 0;
            }
        }
    }
    if (n > 2)
        cout << "2" << endl;
    else
        cout << "1" << endl;
    for (int i = 2; i <= n + 1; ++i)
    {
        if (isPrime[i])
        {
            cout << "1 ";
        }
        else
        {
            cout << "2 ";
        }
    }

    return 0;
}