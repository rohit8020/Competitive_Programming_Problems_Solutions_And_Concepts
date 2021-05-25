//https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    vector<bool> v;
    vector<long long int> v2;
    cin >> n;
    long long int x;
    v.push_back(false);
    v2.push_back(0);
    for (long long int i = 1; i < n; i++)
    {
        cin >> x;
        v.push_back(false);
        v2.push_back(x);
    }
    for (long long int i = 1; i <= n; i++)
    {
        v[v2[i]] = true;
    }
    for (long long int i = 1; i <= n; i++)
    {
        if (v[i] == false)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}