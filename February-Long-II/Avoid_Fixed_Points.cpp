#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;

    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        ll count=0;
        for(int i=0; i<n; i++){
            ll temp;
            cin>>temp;
            v.push_back(temp);
        }

        for (int i = 0; i < n; i++)
        {
            ll temp=i+count+1;
            if(v[i]==temp){
                count++;                
            }
        }

        cout<<count<<endl;

    }
    
    return 0;
}


// for(int i = 0; i < v.size(); i++){
        //     cout<<v[i]<<" ";
        // }