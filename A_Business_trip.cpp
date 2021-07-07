#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    v.reserve(1000);
    for (int i = 0; i < 12; i++)
    {
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),greater<ll>());
    int count=0;
    int i=0;
    while(n>0&&i!=12){
        n=n-v[i];
        i++;
        count++;
    }
    if(n>0){
        cout<<-1<<endl;
    }else{
    cout<<count<<endl;
    }
    return 0;
}