#include<bits/stdc++.h>
using namespace std;

int no_of_ways(int n)
{
    if(n==1)
    return 1;
    else if(n==2)
    return 1+no_of_ways(n-1);
    else if(n==3)
    return 1+no_of_ways(n-1)+no_of_ways(n-2);
    else{
        return no_of_ways(n-1)+no_of_ways(n-2)+no_of_ways(n-3);
    }

}

int main()
{
    int n;
    cin>>n;

    cout<<no_of_ways(n)<<endl;
    return 0;
}