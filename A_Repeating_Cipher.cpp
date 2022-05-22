#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    string ans;
    int x=2;
    for(int i=0;i<n;){
        ans.push_back(str[i]);
        i+=x;
        x++;
    }

    cout<<ans<<endl;
    return 0;
}