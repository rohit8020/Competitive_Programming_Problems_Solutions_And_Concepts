#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int slices=(c*d)/n;
    int drinks=((k*l)/nl)/n;
    int salt=(p/np)/n;
    int min1=min(slices,drinks);
    int min2=min(min1,salt);
    cout<<min2<<endl;
    return 0;
}