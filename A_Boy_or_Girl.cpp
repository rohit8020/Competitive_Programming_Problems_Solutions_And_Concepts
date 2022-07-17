#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    set<char> Set;
    for(auto i : s)
    {
        Set.insert(i);
    }

    if(Set.size()%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;

    return 0;
}