#include<bits/stdc++.h>
using namespace std;

void print_array(int x, int y, int *arr)
{
    for (int i = x; i <= y; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void print_subarrays(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<=j){
                print_array(i,j,arr);
            }
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cin>>n;

    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    print_subarrays(arr,n);

    return 0;
}