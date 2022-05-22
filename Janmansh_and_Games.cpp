#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while (t--)
    {
        long long i,j;
        cin>>i>>j;

        if((i+j)%2==0){
            cout<<"Janmansh"<<endl;
        }else{
            cout<<"Jay"<<endl;
        }
    }
    
    return 0;
}