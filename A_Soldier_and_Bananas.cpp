#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll k,n,w;
    cin>>k>>n>>w;

    ll cost=k*((w+1)*w)/2;
    cout<<((n>=cost)?(0):(cost-n))<<endl;
    return 0;
}