#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        set<int> s;
        s.insert(x);
        s.insert(y);
        s.insert(a);
        s.insert(b);
        cout<<(s.size()-2)<<endl;
    }
    
    return 0;
}
