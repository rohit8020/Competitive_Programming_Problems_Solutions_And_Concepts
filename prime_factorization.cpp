#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for (long long int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int count = 0;
            while (n % i == 0)
            {
                count++;
                n = n / i;
            }
            cout << i << "^" << count << endl;
        }
    }
    if (n > 1)
        cout << n << "^" << 1 << endl;
    return 0;
}