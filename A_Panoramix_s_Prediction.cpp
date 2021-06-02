#include<bits/stdc++.h>
using namespace std;

bool isprime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n,m,temp;
    cin>>n>>m;
    for (int i = n+1; ; i++)
    {
        if(isprime(i))
        {
            temp=i;
            break;   
        }
    }
    if(temp==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}