#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3], temp, dup[9];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> temp;
            arr[i][j] = temp;
        }
    }
    dup[0] = arr[0][1] + arr[1][0] + arr[0][0];
    dup[1] = arr[0][0] + arr[0][2] + arr[1][1] + arr[0][1];
    dup[2] = arr[0][1] + arr[1][2] + arr[0][2];
    dup[3] = arr[0][0] + arr[1][1] + arr[2][0] + arr[1][0];
    dup[4] = arr[0][1] + arr[2][1] + arr[1][0] + arr[1][2] + arr[1][1];
    dup[5] = arr[0][2] + arr[1][1] + arr[2][2] + arr[1][2];
    dup[6] = arr[1][0] + arr[2][1] + arr[2][0];
    dup[7] = arr[1][1] + arr[2][0] + arr[2][2] + arr[2][1];
    dup[8] = arr[1][2] + arr[2][1] + arr[2][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (dup[3 * i + j] % 2 == 0)
            {
                arr[i][j] = 1;
                cout << arr[i][j];
            }
            else
            {
                arr[i][j] = 0;
                cout << arr[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}