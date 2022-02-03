#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while (t--){
        long long int x,y,z;
        cin>>x>>y>>z;
        long long int buy=x*y;
        long long int sell=x*z;
        long long int profit=(sell-buy);
        cout<<profit<<endl;
    }
    return 0;
}