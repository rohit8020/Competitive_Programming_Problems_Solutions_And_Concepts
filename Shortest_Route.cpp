#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        vector<ll> trains;
        vector<ll> destinations;
        trains.reserve(1000000);
        destinations.reserve(1000000);
        cin>>n>>m;
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin>>temp;
            trains.push_back(temp);
        }
        for (ll i = 0; i < m; i++)
        {
            ll temp;
            cin>>temp;
            destinations.push_back(temp);
        }
        vector<ll> right,left,minTime,answer;
        right.reserve(1000000);
        left.reserve(1000000);
        minTime.reserve(1000000);
        answer.reserve(10000);
        ll counter=-1;
        bool flag=false;
        for (ll i = 0; i < n; i++)
        {
            if(trains[i]==1){
                right.push_back(0);
                counter=0;
                flag=true;
            }else{
                right.push_back(counter);
            }
            if(flag)
            counter++;
        }
        counter=-1;
        flag=false;
        for (ll i = n-1; i >= 0; i--)
        {
            if(trains[i]==2){
                left[i]=0;
                counter=0;
                flag=true;
            }else{
                left[i]=counter;    
            }
            if(flag)
            counter++;
        }
        left[0]=0;
        right[0]=0;
        
        for (ll i = 0; i < n; i++)
        {
            if(left[i]==-1&&right[i]==-1){
                minTime.push_back(-1);
            }else if(min(left[i],right[i])==-1){
                minTime.push_back(max(left[i],right[i]));
            }else{
                minTime.push_back(min(left[i],right[i]));
            }
        }
        
        for (ll i = 0; i < m; i++)
        {
            answer.push_back(minTime[destinations[i]-1]);
        }
        for (ll i = 0; i < m; i++)
        {
            cout<<answer[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// for (ll i = 0; i < n; i++)
        // {
        //     cout<<right[i]<<" ";
        // }
        // cout<<endl;
        // for (ll i = 0; i < n; i++)
        // {
        //     cout<<left[i]<<" ";
        // }
        // cout<<endl;

// for (ll i = 0; i < n; i++)
        // {
        //     cout<<minTime[i]<<" ";
        // }
        // cout<<endl;