#include<bits/stdc++.h>
using namespace std;

//funciton which returns the unique number
int unique_no(int arr[],int n){

    int temp=0;

    //now we will take the xor of all the elements of the array then doubles will become zero and single one will be the unique number 1^1^2=2(as 1^1=0)
    for (int i = 0; i < n; i++)
    {
        temp^=arr[i];
    }
    
    return temp;
} 

int main()
{   
    int arr[]={1,2,1,5,7,7,3,4,2,4,3}; //every number occurs twice except one
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<unique_no(arr,n)<<endl;
 
    return 0;
}