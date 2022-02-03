#include<bits/stdc++.h>
using namespace std;

char keypad[][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void genPerm(char inp[],char out[],int i,int j){
    if(inp[i]=='\0'){
        out[i]='\0';
        cout<<out<<endl;
        return;
    }
    
    int digit=inp[i]-'0';
    if(digit==0||digit==1){
        genPerm(inp,out,i+1,j);
    }


    for (int k = 0; k < keypad[digit][k]!='\0'; k++)
    {
        out[j]=keypad[digit][k];

        //rec calls
        genPerm(inp,out,i+1,j+1);
    }
    return;
}

int main()
{
    char inp[10000],out[10000];
    cin>>inp;
    genPerm(inp,out,0,0);
    
    return 0;
}