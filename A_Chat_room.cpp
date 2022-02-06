#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string str2="hello";
    int index=0;
    for(auto i: str){

        char ch=str2[index];
        if(ch==i){
            index++;
        }

        if(index==str2.length()){
            break;
        }
    }
   
    if(index!=str2.length()){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

    return 0;
}