#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{
    ll n;
    cin>>n;
    ll fibo[100000];
    if(n==0){
        cout<<"0 0 0"<<endl;
        return 0;
    }
    if(n==1){
        cout<<"1 0 0"<<endl;
        return 0;
    }
    if(n==2){
        cout<<"1 1 0"<<endl;
        return 0;
    }
    fibo[0]=0;
    fibo[1]=1;
    for (ll i = 2; ; i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
        if(fibo[i]==n){
            cout<<fibo[i-1]<<" "<<fibo[i-3]<<" "<<fibo[i-4]<<endl;
            break;
        }
    }
    
    return 0;
}