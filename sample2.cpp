#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, count2 = 0;
        cin >> n;
        stringstream ss;
        ss << n;
        string str = ss.str();

        stringstream strings(str.substr(0, 1));
        int x = 0;
        strings >> x;
        count2 = (str.size() - 1) * 9 + (x - 1);
        cout << count2 << endl;
    }

    return 0;
}
