#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n,m;
    vector<ll> v;
    cin>>n>>m;
    for (ll i = 0; i < m; i++)
    {
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    ll Time=v[0]-1;
    for (ll i = 0; i < m-1; i++)
    {
        if(i==0){
            if(v[i]<=v[i+1]){
            Time+=v[i+1]-v[i];
            }else{
                Time+=(n-v[i])+(v[i+1]);
            }
        }else{
            if(v[i]<=v[i+1]){
            Time+=v[i+1]-v[i];
            }else{
                Time+=(n-v[i])+(v[i+1]);
            }
        }
    }
    cout<<Time<<endl;
    
    return 0;
}