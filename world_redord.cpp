#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    float k1,k2,k3,v,finalV,time;
    while(T--)
    {
        cin>>k1>>k2>>k3>>v;
        finalV=k1*k2*k3*v;
        time=100/finalV;
        time=(float)((int)(time * 100 + .5)) / 100;
        cout<<time<<endl;
        if(time<9.58f){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}