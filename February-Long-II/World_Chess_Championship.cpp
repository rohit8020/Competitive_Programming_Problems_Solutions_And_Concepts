#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll x;
        string w;
        ll carlPoints=0;
        ll chefPoints=0;

        cin>>x;
        cin>>w;

        for(auto ch:w){
            if(ch=='C'){
                carlPoints+=2;
            }else if(ch=='N'){
                chefPoints+=2;
            }else{
                carlPoints++;
                chefPoints++;
            }
        }

        if(carlPoints>chefPoints){
            cout<<60*x<<endl;
        }else if(chefPoints>carlPoints){
            cout<<40*x<<endl;
        }else{
            cout<<55*x<<endl;
        }

    }
    
    return 0;
}