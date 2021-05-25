#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    cout << 2 << endl
         << 3 << endl;
    for (long long int i = 1;; i++)
    {
        if ((6 * i - 1) > n)
            break;
        cout << (6 * i - 1) << endl;
        if ((6 * i + 1) > n)
            break;
        cout << (6 * i + 1) << endl;
    }

    return 0;
}