#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        string t;
        ll ans;
        cin>>t;
        ans=(((t[0]-'0')-1)*10)+((t.size())*(t.size()+1)/2);
        cout<<ans<<endl;
    }
    
    return 0;
}