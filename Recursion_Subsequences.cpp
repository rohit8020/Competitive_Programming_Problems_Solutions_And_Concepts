#include<bits/stdc++.h>
using namespace std;

void printSubsequences(string str,int i,string output){
    
    if(i==str.length()){
        cout<<output<<endl;
        return;
    }
    
    printSubsequences(str,i+1,output+str[i]);
    printSubsequences(str,i+1,output);

    
}

int main()
{
    string str,output="";
    cin>>str;
    // output+=str[0];
    // cout<<output<<endl;

    printSubsequences(str,0,output);
    return 0;
}