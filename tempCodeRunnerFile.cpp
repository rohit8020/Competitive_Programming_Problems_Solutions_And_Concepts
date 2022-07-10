#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    vector<char>v{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    int n=s.length();
    for(int i=0;i<n;i+=4)
    {
        string str=s[i]+s[i+1]+s[i+2]+s[i+3];
            int x=stoi(str,0,2);
    string ans;
    ans+=v[i];
    cout<<ans<<endl;
    }

}