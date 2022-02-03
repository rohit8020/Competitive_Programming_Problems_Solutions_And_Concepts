#include<bits/stdc++.h>
using namespace std;

void generateBrackets(char out[], int n, int indx, int open, int close){
    if(indx==2*n){
        out[indx]='\0';
        cout<<out<<endl;
        return;
    }

    if(open<n){
        out[indx]='(';
        generateBrackets(out,n,indx+1,open+1,close);
    }

    if(close<open){
        out[indx]=')';
        generateBrackets(out,n,indx+1,open,close+1);
    }
    return;
}

int main()
{
    int n;
    char out[100000];
    cin>>n;
    generateBrackets(out,n,0,0,0);
    return 0;
}