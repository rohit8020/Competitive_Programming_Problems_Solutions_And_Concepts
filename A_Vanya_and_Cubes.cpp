#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll cubes;
    cin>>cubes;
    if(cubes==1){
        cout<<1<<endl;
        return 0;
    }
    ll ans=0;
    ll s=0;
    ll i=1;
    while(s<=cubes){
        s+=(((i)*(i+1))/2);
        i++;
        ans++;
    }
    cout<<ans-1<<endl;
    return 0;
}