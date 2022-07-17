#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="is2 sentence4 this1 a3";
    string str1[1000];
    int j=0;
    for(char i: str){
        if(i==' '){
            j++;
        }
        if(i!=' '){
            str1[j].push_back(i);
        }
    }

    string str2[10000];
    for (int i = 0; i <=j; i++)
    {
        str2[str1[i][str1[i].size()-1]-'0']=str1[i].substr(0,str1[i].size()-1);
    }
    

    for (int i = 1; i <=j+1; i++)
    {
        cout<<str2[i]<<" ";
    }
    // cout<<str1[str1[0].size()-1]<<endl;
    return 0;
}