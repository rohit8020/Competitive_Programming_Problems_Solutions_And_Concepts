#include<bits/stdc++.h>
using namespace std;

int main()
{
    string tcard;
    cin>>tcard;

    for(int i=1;i<=5;i++){
        string hcard;
        cin>>hcard;
        if(tcard[0]!=hcard[0]&&tcard[1]!=hcard[1]){
            continue;
        }
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
    return 0;
}