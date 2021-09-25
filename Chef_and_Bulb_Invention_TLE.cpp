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
        ll j=1;
        rem=p%k;
        if(rem==0){
            for (ll i = 0; i < n; i+=k)
            {
                if(i==p){
                    cout<<j<<endl;
                    break;
                }
                j++;
            }
            continue;
        }
        ll temp=rem;
        ll r=(n-1)%k;
        temp--;
        ll m=(n-1)/k;
        num_days=(n-1)/k+1;
        while (temp--)
        {
            num_days+=m;
            if(r>0){
                num_days+=1;
                r--;
            }
        }
        num_days++;
        for (ll i = rem; i < n; i+=k)
        {
            if(i==p){
                cout<<num_days<<endl;
                break;
            }
            num_days++;
        }
    }
    
    return 0;
}