#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lower = 0, upper = 0;
    string str;
    cin >> str;
    for (auto i : str)
    {
        if (i >= 65 && i <= 91)
        {
            upper++;
        }
        else if (i >= 97 && i <= 122)
        {
            lower++;
        }
    }
    if (lower >= upper)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << endl;
    }
    else if (upper > lower)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str << endl;
    }
    return 0;
}