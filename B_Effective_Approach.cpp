#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n, vasya=0, petya=0;
    cin>>n;
    int temp,aEXtra[1000000];
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        aEXtra[temp]=i;
    }
    int m;
    int b[1000000];
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < m; i++)
    {
        long long int address=aEXtra[b[i]];
        vasya+=address+1;
        petya+=n-address;
    }
    
    cout<<vasya<<" "<<petya<<endl;
    
    return 0;
}