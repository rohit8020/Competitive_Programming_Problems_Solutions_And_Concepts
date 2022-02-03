#include<bits/stdc++.h>
using namespace std;

int profit(int N,int C,int wt[],int prices[]){
    if(N==0||C==0){
        return 0;
    }

    int inc,exc;
    inc=exc=0;

    //if we include the Nth object to pick
    if(wt[N-1]<=C){
        inc=prices[N-1]+profit(N-1,C-wt[N-1],wt,prices);
    }

    //if exclude it
    exc=profit(N-1,C,wt,prices);

    int ans=max(inc,exc);

    return ans;

}

int main()
{
    int wt[]={1,2,3,5};
    int prices[]={20,40,30,100};

    cout<<profit(4,7,wt,prices)<<endl;

    return 0;
}