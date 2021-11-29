#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char a,char b,char c){
    if(n==0){
        return;
    }

    towerOfHanoi(n-1,a,c,b);
    cout<<"MOVE "<<n<<"th disk from "<<a<<" to "<<c<<endl;
    towerOfHanoi(n-1,b,a,c);
}

int main()
{
    int n;
    cin>>n;
    towerOfHanoi(n,'A','B','C');
    return 0;
}