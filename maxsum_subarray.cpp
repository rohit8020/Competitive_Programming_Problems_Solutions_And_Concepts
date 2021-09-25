#include<bits/stdc++.h>
using namespace std;

int kadane_algorithm(int *arr, int n)
{
    int curr_sum=0;
    int max_sum=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        curr_sum+=arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        if(curr_sum>max_sum){
            max_sum=curr_sum;
        }
    }

    return max_sum;
}

int maxsum_subarray_cummulative(int *arr, int n)
{
    int *csum=new int[n];
    for (int i = 0; i < n; i++)
    {
        csum[i]=arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        csum[i]+=csum[i-1];
    }
    

    int max_sum=INT_MIN;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(i<=j){
                int sum;
                if(i==0 and j==0){
                    sum=csum[0];
                }else if(i<=j){
                    sum=csum[j]-csum[i-1];
                }
                if(sum>max_sum){
                    max_sum=sum;
                }
            }
        }
    }

    return max_sum;
}

int sum_subarray(int x, int y, int *arr)
{
    int sum=0;
    for (int i = x; i <= y; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int maxsum_subarrays(int *arr,int n)
{
    int max_sum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<=j){
                int sum=sum_subarray(i,j,arr);
                if(sum>max_sum){
                    max_sum=sum;
                }
            }
        }
    }
    
    return max_sum;
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
    cout<<maxsum_subarrays(arr,n)<<endl;
    cout<<maxsum_subarray_cummulative(arr,n)<<endl;
    cout<<kadane_algorithm(arr,n)<<endl;
    return 0;
}