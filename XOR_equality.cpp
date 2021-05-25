#include <bits/stdc++.h>
using namespace std;

long long int power_func(long long int base, long long int power, long long int m)
{
    long long int result = 1;
    while (power)
    {

        if (power % 2)
        {
            result = (result % m) * (base % m);
            power--;
        }
        else
        {
            base = (base % m) * (base % m);
            power = power / 2;
        }
    }

    return result % m;
}

int main()
{
    long long int t;
    long long int m = pow(10, 9) + 7;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << power_func(2, n - 1, m) << endl;
    }
    return 0;
}