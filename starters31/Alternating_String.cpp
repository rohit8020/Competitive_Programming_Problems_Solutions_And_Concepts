#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        string s;
        ll n;
        cin>>n;
        cin>>s;
        ll ones=0;
        ll zeros=0;
        for(auto i:s){
            if(i=='0'){
                zeros++;
            }else{
                ones++;
            }
        }

        if(zeros==0 or ones==0){
            cout<<1<<endl;
            continue;
        }

        if(zeros==ones){
            cout<<zeros+ones<<endl;
            continue;
        }

        if(zeros<ones){
            cout<<zeros*2+1<<endl;
        }else{
            cout<<ones*2+1<<endl;
        }
    }
    
 
    return 0;
}