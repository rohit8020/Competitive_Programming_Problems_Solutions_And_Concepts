#include<bits/stdc++.h>
using namespace std;

int mergeFunc(int arr[],int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=(mid+1);
    int k=s;

    int temp[100000];
    int count=0;

    while (i<=mid && j<=e)
    {
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k++;
            i++;
        }else{
            temp[k++]=arr[j++];
            count+=mid-i+1;
        }
    }
    
    //fill the array if any of the two is left to be copied
    while (i<=mid)
    {
        temp[k++]=arr[i++];
    }

    while (j<=e)
    {
        temp[k++]=arr[j++];
    }

    //copy all the elements in main array
    for (int i = s; i <=e; i++)
    {
        arr[i]=temp[i];
    }
    
    return count;
}

int inversionCount(int arr[],int s, int e){
    if(s>=e){
        return 0;
    }

    int mid=(s+e)/2;
    int x=inversionCount(arr,s,mid);
    int y=inversionCount(arr,mid+1,e);
    int z=mergeFunc(arr,s,e);

    return (x+y+z);
}
int main()
{
    int arr[]={5,3,7,2,1,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<inversionCount(arr,0,n-1)<<endl;
    return 0;
}