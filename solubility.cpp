//https://www.codechef.com/MAY21C/problems/SOLBLTY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b;
        cin >> x >> a >> b;
        cout << ((a + (100 - x) * b) * 10) << endl;
    }
    return 0;
}