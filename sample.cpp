#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n >> str;
        set<char> s;
        int size = 0, size2 = 0, count = 0;
        s.insert(str[0]);
        size++;
        for (int i = 1; i < n; i++)
        {
            size = s.size();
            s.insert(str[i]);
            size2 = s.size();
            if (str[i] != str[i - 1] && size2 == size)
            {
                cout << "NO" << endl;
                break;
            }
            count++;
        }
        if (count + 1 == n)
        {
            cout << "YES" << endl;
        }

        // int count1 = 0, count2 = 0;
        // if (str[0] >= str[1])
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         if (str[i] >= str[i + 1])
        //         {
        //             count1++;
        //             break;
        //         }
        //     }
        // }
        // else if (str[0] <= str[1])
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         if (str[i] <= str[i + 1])
        //         {
        //             count2++;
        //             break;
        //         }
        //     }
        // }
        // if (count1 == n || count2 == n)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }

    return 0;
}