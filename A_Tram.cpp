#include<bits/stdc++.h>
using namespace std;

int solution(int arrExit[], int arrEnter[],int n)
{
    int maxCapacity=0,temp=0;
    for (int i = 0; i < n; i++)
    {
        if(i==n-1)break;
        temp-=arrExit[i];
        temp+=arrEnter[i];
        if(maxCapacity<temp)
        {
            maxCapacity=temp;
        }
    }
    
    return maxCapacity;
}

int main()
{
    int n;
    int arrEnter[1000000],arrExit[1000000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arrExit[i];
        cin>>arrEnter[i];
    }
    cout<<solution(arrExit, arrEnter, n)<<endl;
}