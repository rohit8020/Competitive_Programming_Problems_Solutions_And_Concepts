#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,-1,-2,-3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=size-1;
    while (i<j)
    {
        if(arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
        }
        j--;
    }
    
    printArray(arr,size);
    
    return 0;
}