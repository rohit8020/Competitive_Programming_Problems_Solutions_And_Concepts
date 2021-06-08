#include<bits/stdc++.h>
using namespace std;

int solution(int arr[], int n)
{
    int max=arr[0],min=arr[0],result=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            result++;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            result++;
        }
    }

    return result;
}

int main()
{
    int n;
    cin>>n;
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<solution(arr,n)<<endl;

    return 0;
}