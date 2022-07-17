//let calculate the factorial of the 100
#include<bits/stdc++.h>
using namespace std;

void multiply(int *a,int &n,int num){

    int carry = 0;
    for (int i = 0; i < n; i++)
    {
        int product = a[i]*num+carry;
        a[i]=product%10;
        carry=product/10;
    }

    while (carry)
    {
        a[n]=carry%10;
        carry=carry/10;
        n++;
    } 
}

int bigFactorial(int n,int arr[]){
    // int *a=new int[10000];
    // for (int i = 0; i < 10000; i++)
    // {
    //     a[i]=0;
    // }
    
    arr[0]=1;
    int len=1;

    for (int i = 2; i <= n; i++)
    {
        multiply(arr,len,i);
    }
    
    return len;
}

int main()
{
    int n;
    int arr[1000000]={0};
    cin>>n;
    stack<int> s;
    int len=bigFactorial(n,arr);

    for(int i=0;i<len;i++){
        s.push(arr[i]);
    }

    for(int i=0;i<len;i++){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}