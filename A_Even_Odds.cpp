#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    if(n&1){
        if(k>n/2+1){
            cout<<(k-(n/2+1))*2<<endl;
        }else{
            cout<<k*2-1<<endl;
        }
    }else{
       if(k>n/2){
            cout<<(k-(n/2))*2<<endl;
        }else{
            cout<<k*2-1<<endl;
        } 
    }
    return 0;
}