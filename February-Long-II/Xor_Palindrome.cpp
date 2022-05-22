#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;

    while (t--)
    {
        ll n;
        string str;
        cin>>n;
        cin>>str;
        ll zerocount = 0;
        ll onecount = 0;
        for (int i = 0; i < n; i++)
        {
            if(str[i]=='0'){
                zerocount++;
            }else{
                onecount++;
            }
        }

        if(zerocount==onecount){
            cout<<"YES"<<endl;
        }else{
            if(((zerocount%2==0)&&
            (onecount%2==0))||
            ((zerocount%2==0)||
            (onecount%2==0))
            ){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }  
    }
    
    return 0;
}