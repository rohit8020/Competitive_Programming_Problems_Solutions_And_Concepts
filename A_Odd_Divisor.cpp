#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        bool flag=false;
        while(n>2)
        {
            if(n%2!=0)
            {
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
            else
            {
                n=(n/2);
            }
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}