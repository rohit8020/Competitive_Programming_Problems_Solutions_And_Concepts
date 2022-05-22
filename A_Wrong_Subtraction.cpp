#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,k;
    cin>>n>>k;

    while (k--)
    {
        if(n%10==0){
            n=n/10;
        }else{
            n--;
        }
    }
    
    cout<<n<<endl;
    return 0;
}