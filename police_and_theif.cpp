#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr;
    vector<int> vp,vt;
    vp.reserve(100);
    vt.reserve(100);
    int n,k;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>arr;
        if(arr=='p')
        vp.push_back(i);
        if(arr=='t')
        vt.push_back(i);
    }
    int t=vp.size();
    int i=0;
    int counter=0;
    while(t)
    {
        if(abs(vt[i]-vp[i])<=k)
        counter++;
        t--;
    }
    
    cout<<counter<<endl;
    
}

//[p,t,p,t,t,p]
//[t,p,t,t,t,p,p,t]