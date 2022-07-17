#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll number;
        cin>>number;
        ll temp=(ll)log2(number);
        cout<<(number-temp-1)<<endl;
    }
    
    return 0;
}