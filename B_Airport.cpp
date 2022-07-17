#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n,m;
    ll min=0;
    ll max=0;
    priority_queue<int> maxp;
    priority_queue<int,vector<int>, greater<int>> minp;

    cin>>n>>m;

    ll arr[10000];

    for (ll i = 0; i < m; i++)
    {
        cin>>arr[i];
        minp.push(arr[i]);
        maxp.push(arr[i]);
    }

    int t=n;

    while (t--) 
    {
        int top=minp.top();
        min+=top;
        top--;

        if(top){
            minp.pop();
            minp.push(top);
        }else{
            minp.pop();
        }
    }
    
    t=n;
    while(t--){
        int top=maxp.top();
        max+=top;
        top--;

        if(top){
            maxp.pop();
            maxp.push(top);
        }else{
            maxp.pop();
        }
    }
    
    

    cout<<max<<" "<<min<<endl;
    return 0;
}