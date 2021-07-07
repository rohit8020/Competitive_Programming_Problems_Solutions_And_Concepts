#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        v.reserve(10000);
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin>>temp;
            v.push_back(temp);
        }
        ll sum=0;
        ll count=0;
        for (ll i = 0; i < n; i++)
        {
            sum+=v[i];
        }
        if(sum%n!=0){
            cout<<-1<<endl;
        }else{
            for (ll i = 0; i < n; i++)
            {
                if((sum/n)<v[i]){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}