#include<bits/stdc++.h>
using namespace std;

void genStrings(char inp[], char out[], int i, int j){
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    int digit=inp[i]-'0';
    char ch=digit+'A'-1;
    out[j]=ch;
    genStrings(inp,out,i+1,j+1);

    if(inp[i+1]!='\0'){
        int secDigit=inp[i+1]-'0';
        int no=digit*10+secDigit;
        if(no<=26){
            ch=no+'A'-1;
            out[j]=ch;
            genStrings(inp,out,i+2,j+1);
        }
        
    }

    return;
}

int main()
{
    char inp[10000], out[10000];
    cin>>inp;

    genStrings(inp,out,0,0);
    return 0;
}