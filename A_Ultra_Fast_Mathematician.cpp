#include<bits/stdc++.h>
using namespace std;

int main()
{
    // long long int n,m;
    string n,m;
    cin>>n>>m;
    for(int i=0,j=0;i<n.length();i++)
    {
        if(n[i]==m[i])
        cout<<"0";
        else
        cout<<"1";
    }
    cout<<endl;
    return 0;
}