#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin>>t;

    while (t--) 
    {   
        ll n;
        cin>>n;
        double ans=pow((0.143*n),n);

        ll mainAns=abs(ans);

        if((ans-mainAns)>=0.5){
            cout<<mainAns+1<<endl;
        }else{
            cout<<mainAns<<endl;
        }
        
    }
    
    return 0;
}