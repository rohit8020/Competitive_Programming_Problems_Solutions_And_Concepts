#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str("hello");
    cout<<str<<endl;

    string str2(str+" world!");
    cout<<str2<<endl;

    str2.append(" "+str+" world!");

    str2+=" "+str+" world!";
    cout<<str2<<endl;


    cout<<"the lenght of the string : "<<str2.length()<<endl;
    //strtok function will break the array on spaces in this case
    char s[100]="My name is Rohit Gangwar!";
    char *ptr=strtok(s," ");

    cout<<ptr<<endl;
    while (ptr!=NULL)
    {
        ptr=strtok(NULL, " ");
        cout<<ptr<<endl;
    }
    
    
    return 0;
}