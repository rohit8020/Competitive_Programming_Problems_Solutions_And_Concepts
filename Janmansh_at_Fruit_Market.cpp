#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while (t--)
    {
        vector<long long> v;
        long long x,a,b,c;
        cin>>x>>a>>b>>c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        long long answer;
        answer=(v[0]*(x-1));
        answer=answer+v[1];
        cout<<answer<<endl;
    }
    
    return 0;
}