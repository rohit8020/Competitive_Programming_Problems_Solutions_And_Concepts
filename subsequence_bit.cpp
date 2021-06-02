#include<bits/stdc++.h>
using namespace std;

void sequence(int n,char arr[])
{
    int j=0;
    while(n>0)
    {
        int last_bit = (n&1);
        if(last_bit==1)
        {
            cout<<arr[j];
        }
        j++;
        n=n>>1;
    }
    cout<<endl; 
}
void printSubsequence(int n, char arr[])
{
    for (int i = 1; i <=(1<<n); i++)
    {
        sequence(i,arr);
    }
    cout<<endl;
    
}
int main()
{
  char arr[1000];
  int n;
  cin>>n;
  cin>>arr;
  printSubsequence(n, arr);
  return 0;
}