#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        count+=temp;
    }
    int temp=0;
    for(int i=1;i<=5;i++)
    {
        if(((count+i)%(n+1))!=1)
        temp++;
    }
    
    cout<<temp<<endl;
    return 0;
}