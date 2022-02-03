#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--){
        long long int n,k,x;
        cin>>n>>k>>x;
        long long int temp=0;
        if(x<=k){
            while(k--){
                if(temp<x){
                    cout<<temp++<<" ";
                }else{
                    cout<<1<<" ";
                }
            }
        }else{
            cout<<-1;
        }
        cout<<endl;
    }
 
    return 0;
}