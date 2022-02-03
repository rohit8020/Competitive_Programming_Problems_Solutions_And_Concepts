/*
evry number is present twice except the one
*/
#include<bits/stdc++.h>
using namespace std;

int unique_noIII(int arr[], int n){
    int binArr[64]={0};
    
    int mask=1;
    for (int i = 0; i < 64; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[j]&mask){    //so here what we are doing is we are 
                binArr[i]++;    //counting the number of set bits first 
            }                   //first in the 0th index of the all 
        }                       //numbers then the 1st index and then 
        mask=mask<<1;           //so on ................
                                
    }
    
    int ans=0;
    int temp=1;
    for (int i = 0; i < 64; i++)
    {
        ans+=temp*(binArr[i]%3); //the remainder of the count of each index by three should be a basis of forming the answer number
        temp*=2;
    }
    
    return ans;
}

int main()
{
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<unique_noIII(arr,n)<<endl;
    return 0;
}