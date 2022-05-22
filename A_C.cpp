#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        ll count=0;
        ll sum=0;
        while(sum<=n){
            sum=a+b;
            ll t=max(a,b);
            a=sum;
            b=t;
            count++;
        }
        cout<<count<<endl;
    }
        
    return 0;
}