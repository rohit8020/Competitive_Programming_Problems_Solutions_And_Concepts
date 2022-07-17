#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int N,x,y;
        cin>>N;
        x=N/4;
        y=N%4;
        if(y==0){cout<<(x-1)*44+60<<endl;}
        else if(y==1&&x==0){cout<<20<<endl;}
        else if(y==2&&x==0){cout<<36<<endl;}
        else if(y==3&&x==0){cout<<51<<endl;}
        else if(y==1&&x>=1){cout<<x*44+32<<endl;}
        else if(y==2&&x>=1){cout<<x*44+44<<endl;}
        else if(y==3&&x>=1){cout<<x*44+55<<endl;}
    }
    return 0;
}