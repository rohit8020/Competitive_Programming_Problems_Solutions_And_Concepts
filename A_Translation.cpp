#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for (auto it1=s1.begin(), it2=s2.end()-1; it1!=s1.end(); it1++,it2--)
    {
        if(*it1!=*it2){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}