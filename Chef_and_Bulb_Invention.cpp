#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,p,k,num_days=0,rem;
        cin>>n>>p>>k;
        ll ans;
        rem=p%k;
        if(rem==0){
            ans=p/k;
            ans++;
            cout<<ans<<endl;
            continue;
        }
        ll temp=rem;
        ll r=(n-1)%k;
        temp--;
        ll m=(n-1)/k;
        num_days=(n-1)/k+1;
        if(temp>=r){
            num_days+=m*temp+r;
        }else{
            num_days+=m*temp+temp;
        }
        ans=p/k;
        num_days+=ans+1;
        cout<<num_days<<endl;
    }
    
    return 0;
}