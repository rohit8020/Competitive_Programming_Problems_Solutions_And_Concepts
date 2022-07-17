#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    string temp=a+b;
    sort(temp.begin(),temp.end());
    sort(c.begin(),c.end());
    if(temp.size()!=c.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    
    for (auto it1 = temp.begin(),it2=c.begin(); it2 != c.end(); it1++,it2++)
    {
        if(*it1!=*it2)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    cout<<"YES"<<endl;
        
    return 0;
}