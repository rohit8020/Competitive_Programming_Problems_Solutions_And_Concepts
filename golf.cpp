//https://www.codechef.com/MAY21C/problems/LKDNGOLF

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, k;
        cin >> n >> x >> k;
        if ((x % k == 0))
        {
            cout << "YES" << endl;
        }
        else if ((n + 1 - x) % k == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}