//this is question is very important beacause it is using concept of returning multiple values
//bitmanipulation
//bitmasking 
//subsequence problem
//inclusion and exclusion principle 

#include<bits/stdc++.h>
using namespace std;

pair<int,int> sequence(long long int n,long long int arr[])
{
    long long int j=0;
    int num=1;
    int flag=0;
    int digitCount=0;
    while(n>0)
    {
        long long int last_bit = (n&1);
        if(last_bit==1)
        {
            // cout<<arr[j];
            num*=arr[j];
            flag++;
            digitCount++;
        }
        j++;
        n=n>>1;
    }
    return flag==0 ? make_pair(0,0) : make_pair(num, digitCount); 
}
long long int printSubsequence(long long int n, long long int arr[], long long int noToCheck)
{
    long long int result=0;
    for (long long int i = 1; i <=(1<<n); i++)
    {
        auto it = sequence(i,arr);
        if(it.first !=0){
            cout<<it.first<<"<---"<<endl;
            cout<<it.second<<"<====="<<endl;
            if(it.second%2==0)
            {
                cout<<floor(noToCheck/it.first)<<"<++++"<<endl;
                result-=floor(noToCheck/it.first);
            }
            else{
                cout<<floor(noToCheck/it.first)<<"<++++"<<endl;
                result+=floor(noToCheck/it.first);
            }
        }
    }
    return result;
}
int main()
{
  long long int arr[1000];
  long long int n,noToCheck;
  cin>>n;               //enter no. of elements you want to insert in the array
  cin>>noToCheck;       //enter the number upto you want to check
  for (long long int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
  cout<<printSubsequence(n, arr, noToCheck)<<endl;
  return 0;
}