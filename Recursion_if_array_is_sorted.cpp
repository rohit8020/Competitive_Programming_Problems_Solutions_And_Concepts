#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(int arr[], int s, int e){
    if(s+1==e){
        return (arr[s]<=arr[e])?true:false;
    }
    bool subAns=isArraySorted(arr,s+1,e);
    return ((arr[s]<=arr[s+1])&&(subAns))?true:false;
}

int main()
{
    int arr[]={1,5,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<(arr[0]<arr[1])?true:false;
    cout<<isArraySorted(arr,0,n-1)<<endl;
    return 0;
}