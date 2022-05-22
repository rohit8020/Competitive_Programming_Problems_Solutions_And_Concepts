#include<bits/stdc++.h>
using namespace std;
 
void printHash(int n){
    string str(n,'#');
    cout<<str<<endl;
}

void printHashRight(int n){
    string str(n,'.');
    str[n-1]='#';
    cout<<str<<endl;
}

void printHashLeft(int n){
    string str(n,'.');
    str[0]='#';
    cout<<str<<endl;
}

int main()
{
    bool flagHash=true;
    bool hashRight=true;

    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        if(flagHash){
            printHash(n);
            flagHash=false;
        }else{
            flagHash=true;
            if(hashRight){
                printHashRight(n);
                hashRight=false;
            }else{
                printHashLeft(n);
                hashRight=true;
            }
        }
    }
    

    // printHash(5);
    // printHashRight(5);
    // printHash(5);
    // printHashLeft(5);
    return 0;
}