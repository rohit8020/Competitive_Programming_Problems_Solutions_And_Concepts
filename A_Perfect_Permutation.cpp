#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(long long int i=2;i<=n;i+=2)
        {
            cout<<i<<" "<<i-1<<" ";
        }
    }
    cout<<endl;
    return 0;
}