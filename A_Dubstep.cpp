#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    bool flag=false;
    while (str.length()!=0)
    {
        string temp;
        temp=str.substr(0,3);
        int count=0;
        if(temp=="WUB"){
            str=str.substr(3,str.length()-2);
            if(flag){
               cout<<" "; 
            }
            flag=false;
        }else{
            temp=str.substr(0,1);
            str=str.substr(1,str.length()-1);
            cout<<temp;
            flag=true;
        }
    }
    cout<<endl;
    return 0;
}