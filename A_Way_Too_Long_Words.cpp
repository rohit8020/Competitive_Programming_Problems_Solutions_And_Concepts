#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,first,last;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        int length=s.size();
        first=s.front();
        last=s.back();
        if(length>10)
        cout<<first<<(length-2)<<last<<endl;
        else
        cout<<s<<endl;
    }
    return 0;
}