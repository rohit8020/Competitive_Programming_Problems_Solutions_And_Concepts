#include <bits/stdc++.h>
using namespace std;

int makesieve(int n)
{
    bool isPrime[n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << " " << isPrime[i] << endl;  //check numbers which are prime numbers
    // }
    for (int i = 0; i <= n; i++)
    {
        if (isPrime[i] == true)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    int n;
    cin >> n;
    int no_of_prime_no = makesieve(n);
    cout << no_of_prime_no << endl;
    return 0;
}