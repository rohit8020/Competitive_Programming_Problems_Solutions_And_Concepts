//http://codeforces.com/problemset/problem/96/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    char chr=str[0];
    int count=1;
    bool danger=false;
    for (int i = 0; i < str.length(); i++)
    {
        if(chr!=str[i]){
            chr=str[i];
            count=1;
        }else{
            count++;
            if(count>=7){
                danger=true;
            }
        }
    }
    (danger)?cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}