#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll g1, s1, b1, g2, s2, b2,t1=0,t2=0;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        t1=g1+s1+b1;
        t2=g2+s2+b2;
        if(t1>t2){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }
    
    return 0;
}