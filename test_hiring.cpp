#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=7, b=6, c=4;
    // a=(c+5)+a;
    b=1^a;
    // for(int c=3;c<=6;c++){
    //     // a=(b^1)+b;
    //     if((a+b)>(c-a)){
    //         break;
    //         // b=(8+3)&a;
    //         // b=(c+8)+a;
    //         // continue;
    //     }
    //     a=(b&c)+b;
    //     b=(b^12)+b;
    // }
    if((c^b^a)<(a+b+c)){
        b=(12+2)&b;
        c=c+a;
    }

    cout<<"\n"<<a+b+c;
    return 0;
}