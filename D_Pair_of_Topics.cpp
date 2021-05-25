#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


typedef tree<pair<long long int,long long int>, null_type, less<pair<long long int,long long int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;
int main()
{
    PBDS St;
    int n;
    cin>>n;
    long long int a[n],b[n],c[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i]=a[i]-b[i];
    }

    long long int count=0;

    for (int i = 0; i < n; i++)
    {
        count+=St.size()-(St.order_of_key({-c[i],1000000000000000}));
        St.insert({c[i],i});   
    }
    cout<<count<<endl;

    return 0;
}