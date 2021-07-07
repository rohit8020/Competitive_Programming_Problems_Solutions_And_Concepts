#include<bits/stdc++.h>
using namespace std;

void shift_left(char str[])
{
    if(str[0]=='\0')
        return;
    str[0]=str[1];
    shift_left(str+1);
}

void rem_dup(char str[])
{
    if(str[0]=='\0')
        return;
    char temp=str[0];
    rem_dup(str+1);
    if(temp==str[1])
    {
        shift_left(str);
    }
}

int main()
{
    char str[100];
    cin>>str;
    // shift_left(str);
    rem_dup(str);
    cout<<"x removed from the string : "<<str;
    return 0;
}