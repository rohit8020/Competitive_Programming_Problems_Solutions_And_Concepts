#include<bits/stdc++.h>
using namespace std;

void multiply(int *arr,int &n,int number)
{
    int carry=0;
    for (int i = 0; i <n; i++)
    {
        int product=arr[i]*number+carry;
        arr[i]=product%10;
        carry=product/10;
    }
    
    while (carry)
    {
        arr[n]=carry%10;
        carry=carry/10;
        n++;
    }
    
}

void big_integer_factorial(int number)
{
    int *arr= new int[1000];
    for (int i = 0; i < 1000; i++)
    {
        arr[i]=0;
    }
    
    arr[0]=1;
    int n=1;
    for (int i = 2; i <= number; i++)
    {
        multiply(arr,n,i);
    }
    
    //print the number
    for (int i = n-1; i>=0; i--)
    {
        cout<<arr[i];
    }
    cout<<endl;
    delete [] arr;
    return;
}

int main()
{
    int number;
    cin>>number;
    big_integer_factorial(number);
    return 0;
}