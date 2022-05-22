#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max=(max_element(arr,arr+n)-arr);
    int min=(min_element(arr,arr+n)-arr);

    int maxIndex=max;
    int minIndex=min;
    for (int i = min; i < n; i++)
    {
        if(arr[i]==arr[minIndex]&&i>minIndex){
            minIndex=i;
        }
    }

    for (int i = max; i>=0; i--)
    {
        if(arr[i]==arr[maxIndex]&&i<maxIndex){
            maxIndex=i;
        }
    }
    
    int ans = 0;
    for (int i = minIndex; i < n-1; i++)
    {
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
            ans++;
        }
    }

    for (int i = maxIndex; i>0; i--)
    {
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
            ans++;
        }
    }

    cout<<"\n"<<ans<<endl;
    
    return 0;
}