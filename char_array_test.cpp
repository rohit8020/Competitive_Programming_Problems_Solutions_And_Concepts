#include<bits/stdc++.h>
using namespace std;

void readline(char chr[], int maxLen)
{
    int i=0;
    char ch=cin.get();
    while (ch != '\n')
    {
        chr[i]=ch;
        i++;
        if(i==(maxLen-1)){
            break;
        }
        ch=cin.get();
    }
    chr[i]='\0';
    
}

int main()
{
    char chr[10000];
    
    // cin>>chr;           // rohit gangwar
    // cout<<chr<<endl;   // rohit
    // int size=sizeof(chr)/sizeof(chr[0]);
    readline(chr,10000);
    cout<<chr;
   
    
    return 0;
}