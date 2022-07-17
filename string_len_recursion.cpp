#include<bits/stdc++.h>
using namespace std;

int strlen(char str[])
{
    if(str[0]=='\0')
        return 0;
    return 1 + strlen(str+1);
}

int main()
{
    char str[1000];
    cin>>str;
    cout<<"The length of the string is : "<<strlen(str)<<" \n";
    return 0;
}