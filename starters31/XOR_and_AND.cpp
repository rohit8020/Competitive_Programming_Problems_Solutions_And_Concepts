#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        unordered_map<ll, ll> m;
        ll value;
        for (ll i = 0; i < n; i++)
        {
            cin >> value;
            value = log2(value);
            m[value]++;
        }

        ll ans = 0;
        for(auto element:m){
            ll temp1,temp2;
            temp2=element.second;
            temp1=(temp2)*(temp2-1);
            temp1=temp1/2;
            ans+=temp1;
        }
        cout << ans << endl;
    }

    return 0;
}