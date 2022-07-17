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
    int arr[]={1,2,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int mid=0;
    int high=size- 1;


    //the famous Dutch Flag problem
    while (mid<=high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++],arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid],arr[high--]);
        default:
            break;
        }
    }
    
    printArray(arr,size);
    return 0;
}