#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

ll powerFunc(ll base,ll power){
    if(power==0)
    return 1;
    ll subProblem=powerFunc(base,power/2)%MOD;
    if(power%2==0){
        return (((subProblem%MOD)*(subProblem%MOD))%MOD);
    }else{
        return (((base)*(subProblem%MOD)*(subProblem%MOD))%MOD);
    }
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        ll result;
        ll Ntuples=powerFunc(2,n);
        result=powerFunc((Ntuples-1),m);
        cout<<result<<endl;
    }
    
    return 0;
}