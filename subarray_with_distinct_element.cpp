#include<bits/stdc++.h>
using namespace std;

void cleanHash(int hash[], int n){
    for (int i = 0; i < n; i++)
    {
        hash[i]=0;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[1000000];
    int hash[1000]={0};
    int sum=0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int temp=0;
        int j=i;
        while(hash[arr[j]]!=1){
            hash[arr[j]]=1;
            temp++;
            if(j!=(n-1))
            j++;
        }

        cout<<"temp->"<<temp<<endl;
        int temp2=(temp*(temp+1))/2;
        sum+=temp2;

        cleanHash(hash,1000);
    }
    
    cout<<sum<<endl;
    return 0;
}