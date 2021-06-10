#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int abc=sqrt(a*b*c);
    long long int L=abc/a;
    long long int B=abc/b;
    long long int H=abc/c;
    cout<<(L+B+H)*4<<endl;
    return 0;
}