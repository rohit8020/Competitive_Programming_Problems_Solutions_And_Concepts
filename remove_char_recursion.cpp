#include<bits/stdc++.h>
using namespace std;

void shift_left(char str[])
{
    if(str[0]=='\0')
        return;
    str[0]=str[1];
    shift_left(str+1);
}

void str_rem_x(char str[])
{
    if(str[0]=='\0')
        return;

    if(str[0]=='x'){
        shift_left(str);
        str_rem_x(str+1);
    }else{
        str_rem_x(str+1);
    }
}

int main()
{
    char str[100];
    cin>>str;
    // shift_left(str);
    str_rem_x(str);
    cout<<"x removed from the string : "<<str;
    return 0;
}