#include<bits/stdc++.h>
using namespace std;

#define ll long long

void printLine(int i){
    for (ll j = 0; j <=i; j++)
    {
        if(i!=0){
        cout<<j<<" ";
        }else{
            cout<<j;
        }
    }
    for (ll j = i-1;j>=0;j--)
    {
        if(j!=0){
        cout<<j<<" ";
        }else{
            cout<<j;
        }
    }
    cout<<endl;
}

void printPattern(int i,int n,string str){
    if(i==n){
        cout<<str;
        printLine(i);
        return;
    }
    cout<<str;
    printLine(i);
    str.pop_back();
    str.pop_back();
    printPattern(i+1,n,str);
    cout<<str+"  ";
    printLine(i);
}

int main()
{
    ll n;
    cin >> n;

    string str ="";
    ll temp=n;
    while(temp--){
        str +="  ";
    }
    printPattern(0,n,str);
    return 0;
}