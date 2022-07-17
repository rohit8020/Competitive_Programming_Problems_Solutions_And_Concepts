#include <bits/stdc++.h>
using namespace std;

int digits_in_factorial(int n)
{
    double digits = 0;
    if (n < 0)
        return 0;
    if (n <= 1)
        return 1;
    for (int i = 2; i <= n; i++)
    {
        digits += log10(i);
    }

    return floor(digits) + 1;
}
int main()
{
    int n;
    cin >> n;
    cout << digits_in_factorial(n) << endl;

    return 0;
}