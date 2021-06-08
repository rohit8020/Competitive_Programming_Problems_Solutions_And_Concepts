#include<bits/stdc++.h>
using namespace std;

int solution(int arrx[], int arry[], int n)
{
    int countx1=0,county1=0,countx0=0,county0=0;
    int result=0;
    for (int i = 0; i < n; i++)
    {
        if(arrx[i]==1)countx1++;
        if(arry[i]==1)county1++;
        if(arrx[i]==0)countx0++;
        if(arry[i]==0)county0++;
    }
    if(countx0>countx1)
    {
        result+=countx1;
    }
    else
    {
        result+=countx0;
    }
    if(county0>county1)
    {
        result+=county1;
    }
    else
    {
        result+=county0;
    }
    
    return result;
}

int main()
{
    int n;
    cin>>n;
    int arrx[100000], arry[100000];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>arrx[i];
        cin>>arry[i];
    }
    cout<<solution(arrx,arry,n)<<endl;

    return 0;
}