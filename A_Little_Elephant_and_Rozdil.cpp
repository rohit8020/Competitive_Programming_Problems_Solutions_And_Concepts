#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n;
    ll time_to_cities[1000000];
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        cin>>time_to_cities[i];
    }
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    if(n==2){
        if(time_to_cities[0]<time_to_cities[1]){
            cout<<1<<endl;
        }else if(time_to_cities[0]>time_to_cities[1]){
            cout<<2<<endl;
        }else{
            cout<<"Still Rozdil"<<endl;
        }
        return 0;
    }
    ll min=time_to_cities[0];
    ll index=0;
    ll count=1;
    for (ll i = 1; i < n; i++)
    {
        bool flag=true;
        if(time_to_cities[i]<min){
            min=time_to_cities[i];
            index=i;
            flag=false;
            count=1;
        }
        if(time_to_cities[i]==min&&flag){
            count=2;
        }
    }
    if(count>1){
        cout<<"Still Rozdil"<<endl;
    }else{
    cout<<index+1<<endl;
    }
    return 0;
}