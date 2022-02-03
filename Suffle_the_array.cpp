#include<bits/stdc++.h>
using namespace std;

void suffleArray(int arr[],int n){
    for (int i = 1; i < n/2; i++)
    {
        int j=n/2;
        int k=i;
        int x=1;
        while (k<j)
        {
            swap(arr[k],arr[j+x-1]);
            k++;
            x++;
        }

        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
    }
    
}

int main()
{
    // int arr[]={1,3,4,5,6,8,9,10};
    int arr[]={2,5,1,3,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    suffleArray(arr,n);

    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    return 0;
}