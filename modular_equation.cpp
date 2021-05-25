#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, N, M, count = 0;
        cin >> N >> M;
        b = N;
        while (b > 1)
        {
            long long int temp;
            temp = M - (M % b);
            for (long long int i = 1; i < b; i++)
            {
                if (temp % i == 0)
                {
                    count++;
                }
            }
            b--;
        }
        cout << count << endl;
    }
    return 0;
}