#include<bits/stdc++.h>
using namespace std;

int recMultiply(int a, int b){

    if(b==0){
        return 0;
    }

    if(b==1){
        return a;
    }
    
    int subAns=recMultiply(a,b/2);
    int ans=subAns+subAns;
    if(b&1){
        ans+=a;
    }
    
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"a*b : "<<recMultiply(a,b)<<endl;
    return 0;
}