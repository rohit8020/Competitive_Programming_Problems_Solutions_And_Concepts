#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int base,power,result=1;
    cin>>base>>power;
    long long int x=base;
    while (power)
    {
        // cout<<x<<"+++"<<endl;
        long long int temp=(power&1);
        if(temp==0)temp=1;
        else temp=x;
        // cout<<temp<<"<ooo"<<endl;
        result*=temp;
        cout<<result<<"<----"<<endl;
        // cout<<power<<"<==="<<endl;
        power=power>>1;
        // cout<<power<<"<---"<<endl;
        x*=x;
    }
    cout<<result<<endl;
    return 0;
}