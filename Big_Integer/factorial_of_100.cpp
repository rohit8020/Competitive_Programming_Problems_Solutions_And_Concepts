//let calculate the factorial of the 100
#include<bits/stdc++.h>
using namespace std;

void factorial100(int arr[],int n){
    
    arr[1]=1;

    for (int i = 2; i <= n; i++)
    {
        int index=1;
        int carry=0;
        int rem=0;
        int div=0;

        while (true)
        {
            int mul=arr[index]*i;

            int rem=mul%10;
            int div=mul/10;
            
            if(div>0){
                arr[index]=rem;
            }

        }
        
    }
    
}

int main()
{
    int n;
    int arr[1000000]={0};
    cin>>n;
    
    factorial100(arr,n);
    return 0;
}