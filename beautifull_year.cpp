#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year >= 1000 && year <= 9000)
    {
        for (int i = year + 1;; i++)
        {
            if ((i / 1000) != ((i / 100) % 10) &&
                (i / 1000) != ((i % 100) / 10) &&
                (i / 1000) != (i % 10) &&
                ((i / 100) % 10) != ((i % 100) / 10) &&
                ((i / 100) % 10) != (i % 10) &&
                ((i % 100) / 10) != (i % 10))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}