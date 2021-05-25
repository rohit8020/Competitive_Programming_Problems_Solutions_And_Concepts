#include <bits/stdc++.h>
using namespace std;

long long int power_func(long long int base, long long int power)
{
    long long int result = 1;
    while (power)
    {

        if (power % 2)
        {
            result *= base;
            power--;
        }
        else
        {
            base *= base;
            power = power / 2;
        }
    }

    return result;
}
int main()
{
    long long int num, base, power;
    cout << "Base : ";
    cin >> base;
    cout << "Power : ";
    cin >> power;
    cout << "The Number is : " << power_func(base, power) << endl;
    return 0;
}