#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int k, temp1, temp2, S = 0;
        cin >> k;
        for (long long int i = 1; i <= 2 * k; i++)
        {
            temp1 = k + i * i;
            temp2 = k + (i + 1) * (i + 1);
            S += __gcd(temp1, temp2);
        }
        cout << S << endl;
    }
    return 0;
}