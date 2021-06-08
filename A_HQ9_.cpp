#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(auto i: s)
    {
        if(i=='H'||i=='Q'||i=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}