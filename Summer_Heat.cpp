#include<bits/stdc++.h>
using namespace std;

typedef long long int ll; 

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll xa ,xb, Xa, Xb;
        cin>>xa>>xb>>Xa>>Xb;
        ll temp =Xa/xa;
        ll temp2 =Xb/xb;
        cout<<(temp+temp2)<<endl;
    }
    return 0;   
}