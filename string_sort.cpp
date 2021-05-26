#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
    if(a.length()<b.length())
    {
        if(b.find(a)!=string::npos)
        {
            return false;
        }
    }
    else if(b.length()<a.length())
    {
        if(a.find(b)!=string::npos)
        {
            return true;
        }
    }
    return a<b;
}

int main()
{
    vector<string> v;
    string temp;
    v.reserve(1000);
    int n;
    cin>>n;
    while (n--)
    {
        cin>>temp;
        v.push_back(temp);        
    }
    sort(v.begin(),v.end(),compare);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    return 0;
}