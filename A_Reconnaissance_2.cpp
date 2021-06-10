#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[10000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int min=INT_MAX;
    int index1,index2;
    for (int i = 0; i < n; i++)
    {
        if(abs(arr[i]-arr[(i+1)%n])<min){
            min=abs(arr[i]-arr[(i+1)%n]);
            index1=i;
            index2=(i+1)%n;
        }

    }

    cout<<index1+1<<" "<<index2+1<<endl;
    
    return 0;
}