#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int size)
{
    for (int i = 1; i < 6; i++)
    {
        int e=arr[i];
        int j=i-1;
        while (j>=0 and arr[j]>e)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=e;
    }
}


//i was testing it and it worked but it is not real insertion sort and this is doing swaping
void bad_insertion_sort(int arr[],int size)
{
    for (int i = 1; i < 6; i++)
    {
        int j=i;
        while (j>0 and arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    
}

int main()
{
    int arr[]={213,11,42,55,23,34};
    insertion_sort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;

    return 0;
    
}