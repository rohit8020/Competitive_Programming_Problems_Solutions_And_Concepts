//https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 1, max = 1;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
        {
            count = count + 1;
            if (count >= max)
            {
                max = count;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << max << endl;
    return 0;
}