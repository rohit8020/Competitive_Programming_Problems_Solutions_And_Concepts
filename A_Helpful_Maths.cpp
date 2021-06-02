#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string temp;
    vector<char> v;
    for(int i=0;s[i]!='\0';i++)
    {
        if(i%2==0)
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<s.length()/2+1;i++)
    {
        temp.push_back(v[i]);
        temp+="+";
    }
    temp.pop_back();
    cout<<temp<<endl;
    return 0;
}
