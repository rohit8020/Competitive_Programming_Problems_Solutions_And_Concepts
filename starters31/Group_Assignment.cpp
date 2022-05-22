#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;
        ll ans=2*n-(x-1);
        cout<<ans<<endl;
    }
    
    return 0;
}