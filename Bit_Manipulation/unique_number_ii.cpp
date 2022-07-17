//every nunmer is present twice in the arra except two number find those two numbers

#include<bits/stdc++.h>
using namespace std;

int indexOfSetBit(int num){
    int ans=0;
    while (num)
    {
        num=num>>1;
        ans++;
    }
    
    return ans;
}

pair<int,int> uniqueNoII(int arr[],int n){

    int xorNum=0;

    for (int i = 0; i < n; i++)
    {
        xorNum^=arr[i]; //xorNum=1^2
    }

    int index=indexOfSetBit(xorNum);
    // cout<<"indexOfSetBit "<<index<<endl;

    int mask= 1<<(index-1);

    int ans1=0;
    for (int i = 0; i < n; i++)
    {
        if(mask & arr[i]){
            ans1^=arr[i];   //in xor of two numbers there can only be 1 set bit in one of the two number thats why we are taking the xor of all the elements and the number with the given set bit  
        }
    }
    

    return make_pair(ans1,(xorNum^ans1));
    
}

int main()
{
    int arr[]={1,2,3,4,5,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    pair<int,int> pr=uniqueNoII(arr,n);
    cout<<pr.first<<" "<<pr.second<<endl;
    return 0;
}