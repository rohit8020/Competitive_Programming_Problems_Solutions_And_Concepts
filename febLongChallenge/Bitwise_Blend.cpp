#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool parityCheck(ll a,ll b) { 
    return (((a&b)%2)!=((a|b)%2));
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        vector<int> v;
        v.reserve(100000);
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        for (ll i = 0; i < n; i++)
        {
            
        }
        
        
    }

    return 0;
}