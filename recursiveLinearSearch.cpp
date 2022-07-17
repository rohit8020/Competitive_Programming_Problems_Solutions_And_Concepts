#include<bits/stdc++.h>
using namespace std;

bool recLinSearch(int arr[], int size, int key){
    if(size<0){
        return false;
    }else{
        if(arr[size-1]==key){
            return true;
        }else{
            return recLinSearch(arr,size-1,key);
        }
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=6;
    cout<<(recLinSearch(arr,size,6)?"true":"false")<<endl;
    return 0;
}