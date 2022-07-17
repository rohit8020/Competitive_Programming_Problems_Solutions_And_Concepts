#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length, i = 0;
    string str;
    cin >> str;
    length = str.length();
    while (length)
    {
        if (str[i] == '.')
        {
            cout << 0;
            i = i + 1;
            length = length - 1;
        }
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            cout << 1;
            i = i + 2;
            length = length - 2;
        }
        else if (str[i] == '-' && str[i + 1] == '-')
        {
            cout << 2;
            i = i + 2;
            length = length - 2;
        }
    }

    return 0;
}