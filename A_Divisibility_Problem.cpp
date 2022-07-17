#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if(a%b==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout << abs(b - (a % b)) << endl;
        }
    }
    return 0;
}