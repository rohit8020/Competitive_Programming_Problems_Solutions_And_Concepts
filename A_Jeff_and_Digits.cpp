#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin>>n;
    ll countZero=0;
    ll countFive=0;
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin>>temp;
        sum+=temp;
        if(temp==0)countZero++;
        if(temp==5)countFive++;
    }
    ll nineMulti=countFive/9;
    
    if(nineMulti>=1&&countZero>=1){
        while (nineMulti--)
        {
            auto fives = string(9, '5');
            cout<<fives;
        }
        auto zeros = string(countZero, '0');
        cout<<zeros<<endl;
    }else if(countZero>=1){
        cout<<0<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}