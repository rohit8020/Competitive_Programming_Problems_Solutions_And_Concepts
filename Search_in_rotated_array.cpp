#include<bits/stdc++.h>
using namespace std;

int divIndex(int arr[], int l, int r){
    if(r>=l){
        int mid=(l+r)/2;

        if((arr[mid]>arr[mid-1])&&(arr[mid]>arr[mid+1])){
            return mid;
        }
        if(arr[mid]>arr[0]){
            return divIndex(arr,mid+1,r);
        }else{
            return divIndex(arr,0,mid);
        }
    }

    return -1;
}

int binarySearch(int arr[], int l, int r,int ele){

    
    if(r>=l){
        int mid=(l+r)/2;

        if(arr[mid]==ele){
            return mid;
        }
        if(arr[mid]>ele){
            return binarySearch(arr,l,mid-1,ele);
        }

        return binarySearch(arr,mid+1,r,ele);
    }

    return -1;
}


int searchInRotated(int arr[], int l, int r,int num){

    int dividingIndex=divIndex(arr,l,r);
    cout<<dividingIndex<<endl;
    int x=binarySearch(arr,l,dividingIndex,num);
    // cout<<x<<endl;
    int y=binarySearch(arr,dividingIndex+1,r,num);
    if(x>0){
        return x;
    }
    if(y>0){
        return y;
    }

    return -1;
}

int main()
{
    // int arr[]={1,2,3,4,5};
    int n ;
    cin>>n;
    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i] ;
    }

    cout<<searchInRotated(arr,0,n-1,5)<<endl;
    // cout<<binarySearch(arr,0,5,1)<<endl;
    // cout<<divIndex(arr,0,n-1)<<endl;
    return 0;
}