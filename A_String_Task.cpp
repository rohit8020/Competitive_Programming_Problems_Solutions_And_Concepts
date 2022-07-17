//https://codeforces.com/problemset/problem/118/A
#include<bits/stdc++.h>
using namespace std;

bool isVowel(char chr){
    char temp=tolower(chr);
    return (
        temp=='a'||
        temp=='e'||
        temp=='i'||
        temp=='u'||
        temp=='o'||
        temp=='y');
}

int main()
{
    string input,output="";
    cin>>input;

    for (int i = 0; i < input.length(); i++)
    {
        if(!isVowel(input[i])){
            string temp(1,tolower(input[i]));
            output=output + "." + temp;
        }
    }
    cout<<output<<endl;

    return 0;
}