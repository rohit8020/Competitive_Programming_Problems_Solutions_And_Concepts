#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string str, temp;
    cin >> n >> t;
    cin >> str;
    temp = str;
    while (t--)
    {
        for (int i = 1; i < n; i++)
        {
            if (temp[i] == 'G' && temp[i - 1] == 'B')
            {
                str[i] = 'B';
                str[i - 1] = 'G';
            }
        }
        temp = str;
    }
    cout << str << endl;

    return 0;
}