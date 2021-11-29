#include<bits/stdc++.h>
using namespace std;

void bubbleSortRecursive(int arr[],int j,int n){
    if(n==1){
        return ;
    }

    if(j==n-1){
        return bubbleSortRecursive(arr,0,n-1);
    }

    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }

    bubbleSortRecursive(arr,j+1,n);
    return;
}

int main()
{
    int arr[]={5,3,7,2,2,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSortRecursive(arr,0,n-1);
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}