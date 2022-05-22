#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
        bool s=false;
        ll count=0;
        ll ans=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1'){
                s=true;
            }

            if(str[i]=='1' and str[i-1]=='0'){
                ans+=count;
                count=0;
            }

            if(s and str[i]=='0'){
                count++;
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}