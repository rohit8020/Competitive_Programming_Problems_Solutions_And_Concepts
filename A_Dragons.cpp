#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pp pair<int,int>

int main()
{
    ll s,n;
    cin>>s>>n;
    bool win=false;
    priority_queue<pp,vector<pp>,greater<pp>> min;
    ll t=n;
    
    while(t--){
        ll sd,impv;
        cin>>sd>>impv;
        min.push(make_pair(sd,impv));
    }
    
    while(n--){
        if(s>min.top().first){
            s+=min.top().second;
            win=true;
            min.pop();
        }else{
            win=false;
            break;
        }
    }

    if(win){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}