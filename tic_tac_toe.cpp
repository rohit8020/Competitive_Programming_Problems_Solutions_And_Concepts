#include <bits/stdc++.h>
using namespace std;

int count_x(char arr[][3])
{
    int num_of_x = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 'X')
                num_of_x++;
        }
    }
    return num_of_x;
}
int count_o(char arr[][3])
{
    int num_of_o = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 'O')
                num_of_o++;
        }
    }
    return num_of_o;
}
int count__(char arr[][3])
{
    int num_of__ = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == '_')
                num_of__++;
        }
    }
    return num_of__;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[3][3];
        int num_of_x, num_of_o, num_of__, x_winning_times = 0, o_winning_times = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
        num_of_x = count_x(arr);
        num_of_o = count_o(arr);
        num_of__ = count__(arr);

        for (int i = 0; i < 3; i++)
        {
            if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
            {
                if (arr[i][0] == 'X')
                    x_winning_times++;
                else if (arr[i][0] == 'O')
                    o_winning_times++;
            }

            if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
            {
                if (arr[0][i] == 'X')
                    x_winning_times++;
                else if (arr[0][i] == 'O')
                    o_winning_times++;
            }
        }
        if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        {
            if (arr[1][1] == 'X')
                x_winning_times++;
            else if (arr[1][1] == 'O')
                o_winning_times++;
        }
        if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2])
        {
            if (arr[2][0] == 'X')
                x_winning_times++;
            else if (arr[2][0] == 'O')
                o_winning_times++;
        }

        if (num_of_o > num_of_x)
            cout << 3 << endl;
        else if (num_of_x - num_of_o > 1)
            cout << 3 << endl;
        else if (num_of_x > num_of_o && x_winning_times == 1 && o_winning_times == 0)
            cout << 1 << endl;
        else if (num_of_o == num_of_x && x_winning_times == 0 && o_winning_times == 1)
            cout << 1 << endl;
        else if (num_of__ == 0 && x_winning_times == 0 && o_winning_times == 0)
            cout << 1 << endl;
        else if (num_of__ == 0 && x_winning_times == 2)
            cout << 1 << endl;
        else if (num_of__ > 0 && x_winning_times == 0 && o_winning_times == 0)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}
