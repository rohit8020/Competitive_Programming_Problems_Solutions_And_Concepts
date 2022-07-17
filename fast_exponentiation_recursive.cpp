#include<bits/stdc++.h>
using namespace std;

long long int powerFunc(long long int base, long long int power)
{
    if(power==0)
        return 1;
    long long int subPorblem=powerFunc(base,power/2);

    if(power%2==0)
    return subPorblem*subPorblem;
    else
    return base*subPorblem*subPorblem;
}

int main()
{
    long long int base,power;
    cin>>base>>power;
    cout<<powerFunc(base, power)<<endl;

    return 0;
}