#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
   
    int arr[]={a,b,c};
    sort(arr,arr+3);

    int tdis=(arr[1]-arr[0])+(arr[2]-arr[1]);
    cout<<tdis<<endl;
    return 0;
}