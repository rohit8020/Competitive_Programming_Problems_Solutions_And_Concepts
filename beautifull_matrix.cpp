#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5], r, c, temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> temp;
            if (temp == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    cout << abs(3 - r - 1) + abs(3 - c - 1) << endl;
    return 0;
}