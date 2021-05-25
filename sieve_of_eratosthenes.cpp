#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int maxN;
    cin >> maxN;
    vector<bool> isPrime;
    isPrime.push_back(false);
    isPrime.push_back(false);
    for (long long int i = 2; i <= maxN; i++)
    {
        isPrime.push_back(true);
    }
    for (long long int i = 2; i * i <= maxN; i++)
    {
        if (isPrime[i])
        {
            for (long long int j = i * i; j <= maxN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (long long int i = 0; i < maxN; i++)
    {
        if (isPrime[i])
        {
            cout << i << endl;
        }
    }
    return 0;
}