#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        v.reserve(10000);
        multiset<ll> s;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin>>temp;
            v.push_back(temp);
            s.insert(temp);
        }
        ll first=*s.begin(),last=*s.end();
        ll result=0;
        for (ll i = 0; i < n; i++)
        {
            if(v[i]==first){
                first=i;
            }
            if(v[i]==last){
                last=i;
            }
        }
        if(first<=n/2&&last<=n/2){
            result=max(first,last);
            result=result+1;
        }else if(first<=n/2&&last>n/2){
            result=first+1+n-last;
        }else if(first>n/2&&last>n/2){
            result=min(first,last);
            result=result+1;
        }else{
            result=last+1+n-first;
        }
        cout<<result<<endl;
    }
    return 0;
}