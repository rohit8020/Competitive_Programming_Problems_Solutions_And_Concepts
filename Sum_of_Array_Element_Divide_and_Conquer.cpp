#include<bits/stdc++.h>
using namespace std;

int findSum(int arr[],int n,int s,int e){

    int mid=(s+e)/2;

    if(s>=e){
        return arr[s];
    }

    int left=findSum(arr,n,s,mid);
    int right=findSum(arr,n,mid+1,e);

    return left+right;
}

int main()
{
    int arr[]={12,0,3,4,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<findSum(arr,n,0,n-1)<<endl;
 
    return 0;
}