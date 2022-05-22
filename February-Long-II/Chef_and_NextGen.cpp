#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;

    while (t--){
        ll a,b,x,y;
        cin>>a>>b>>x>>y;
        if((x*y)>=(a*b)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}