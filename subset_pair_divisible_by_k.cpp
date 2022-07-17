#include<bits/stdc++.h>
using namespace std;

int no_of_subset(int arr[], int n, int k)
{
    int hash_map[k];
    int result=0;
    for (int i = 0; i < k; i++)
    {
        hash_map[i]=0;
    }
    
    for(int i=0;i<n;i++)
    {
        hash_map[arr[i]%k]++;
    }
    bool flag=true;
    for (int i = 0; i < k; i++)
    {
        if(i==0)
        {
            result+=hash_map[i]/2;
        }
        if(k%2==0)
        {
            if(flag&&i==k/2)
            {
                result+=hash_map[i];
                flag=false;
            }
            if(i<k/2)
            {
                result+=min(hash_map[i],hash_map[k-i]);
            }
        }
        else
        {
            if(i<=k/2)
            {
                result+=min(hash_map[i],hash_map[k-i]);
            }
        }
    }

    return result;
}

int main()
{
    int n,k;
    int arr[10000];

    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<no_of_subset(arr, n, k)<<endl;

    return 0;
}