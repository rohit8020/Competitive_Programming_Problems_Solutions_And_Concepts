#include<bits/stdc++.h>
using namespace std;

int main()
{
    //the given array should be sorted
    long long int n,temp;
    cin>>n;
    vector<long long int> v1, v2,v3;
    v1.reserve(10000);
    v2.reserve(10000);
    v3.reserve(100000);
    for (long long int i = 0; i < n; i++)
    {
        cin>>temp;
        v1.push_back(temp);
    }
    for (long long int i = 0; i < n; i++)
    {
        cin>>temp;
        v2.push_back(temp);
    }
    long long int i = 0,j=0;
    for (; i<n&&j<n;)
    {
        if(v1[i]<v2[j])
        {
            v3.push_back(v1[i]);
            i++;
        }
        else
        {
            v3.push_back(v2[j]);
            j++;
        }
    }
    // cout<<"->"<<i<<" "<<"->"<<j<<endl;
    if(i<n)
    {
        for (long long int x = i; x < n; x++)
        {
            v3.push_back(v1[x]);
        }
        
    }
    if(j<n)
    {
        for (long long int y = j; y < n; y++)
        {
            v3.push_back(v2[y]);
        }
    }
    // for (long long int i = 0; i < 2*n; i++)
    // {
    //     cout<<v3[i]<<" ";
    // }
    
    cout<<v3[(2*n)/2-1]<<"  "<<v3[((2*n)/2)]<<endl;
    
    
    
    return 0;
}