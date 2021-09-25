#include<bits/stdc++.h>
using namespace std;

void two_pointer_for_pair_sum(int *sorted_arr,int n, int k)
{
    int i=0;
    int j=n-1;

    while (i<j)
    {
        int sum=sorted_arr[i]+sorted_arr[j];
        if(sum>k){
            j--;
        }else if(sum<k){
            i++;
        }else if(sum==k){
            cout<<sorted_arr[i]<<" "<<sorted_arr[j]<<endl;
            i++;
            j--;
        }
    }
    
}

int main()
{
    int n,k;
    cin>>n>>k;
    int *sorted_arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>sorted_arr[i];
    }
    
    sort(sorted_arr,sorted_arr+n);

    two_pointer_for_pair_sum(sorted_arr,n,k);
    return 0;
}