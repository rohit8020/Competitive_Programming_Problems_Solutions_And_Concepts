#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int k=2;
    int cnt=0;

    while (n>=k)
    {
        int temp=n;
        while (temp%k==0)
        {
            temp=temp/k;
            cnt++;
        }
        n--;
    }
    
    cout<<cnt<<endl;
 
    return 0;
}