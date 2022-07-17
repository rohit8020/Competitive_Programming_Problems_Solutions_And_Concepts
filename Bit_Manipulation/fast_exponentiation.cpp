// the fast exonentiation a to the power b
#include<bits/stdc++.h>
using namespace std;

long long int fastExponentiation(long long int a, long long int b){

    long long int ans=1;
    while (b)
    {
        if(b&1){
            ans=ans*a;  // 3^5=(3^4)^1 . (3^2)^0 . (3^1)^1 
        }               // 5=101
        a=a*a;
        b=b>>1;
    }
    
    return ans;
}

int main()
{
    long long int a,b;
    cin>>a >> b;

    cout<<fastExponentiation(a,b);
    return 0;
}