#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
    
        for (int i = 0; i < n; i++)
        {
            ll  temp;
            cin>>temp;
            v.push_back(temp);
            
        }
        string ans="YES";
        

        
        if(ans=="NO"){
            cout<<ans<<endl;
            continue;
        }

        cout<<ans<<endl;
    }
    
    return 0;
}
