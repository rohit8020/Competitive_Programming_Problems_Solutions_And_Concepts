#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={-2,-3,-1};
    int n=sizeof(arr)/sizeof(arr[0]);

    int max=INT_MIN;
    int tempmax=0;

    for(int i=0;i<n;i++){
            tempmax=tempmax+arr[i];
            
            cout<<"Tempmax: "<<tempmax<<endl;
            cout<<"max: "<<max<<endl;
            cout<<"Tempmax: "<<tempmax<<endl;
            if(tempmax>=max){
                max=tempmax;
            }
            if(arr[i]>=tempmax){
                tempmax=arr[i];
            }

    }

    cout<<"max: "<<max<<endl;
    return 0;
}