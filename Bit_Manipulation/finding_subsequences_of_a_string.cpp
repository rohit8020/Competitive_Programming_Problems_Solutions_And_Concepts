#include<bits/stdc++.h>
using namespace std;

void printSubsequences(char chr[],int n){

    int numSubStr=1<<n;

    for (int i = 1; i <= numSubStr; i++)
    {
        int index = 0;
        int temp=i;
        while (temp)
        {
            if(temp&1){
                cout<<chr[index];
            }
            index++;
            temp=temp>>1;
        }
        cout<<endl;
    }
    
}

int main()
{
    char chr[100];
    int n;

    cin>>n;
    cin>>chr;
    
    printSubsequences(chr,n);

    return 0;
}