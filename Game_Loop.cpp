#include<bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int t;
        cin>>t;
        if(t!=0&&t!=1){
            cout<<"GAME OVER!";
            break;
        }
        if(t){
            cout<<"CAR IS RUNNING!";
        }else{
            cout<<"CAR IS NOT RUNNING!";
        }
    }
    
    return 0;
}