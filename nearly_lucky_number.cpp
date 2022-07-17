#include <bits/stdc++.h>
using namespace std;

int main()
{
    int four = 0, seven = 0, total = 0;
    string str;
    cin >> str;
    for (auto i : str)
    {
        if (i == '4')
        {
            four++;
        }
        else if (i == '7')
        {
            seven++;
        }
        total++;
    }
    if (four + seven == 4 || four + seven == 7 || four + seven == 47 || four + seven == 74 || four + seven == 447 || four + seven == 474 || four + seven == 477)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}