#include<bits/stdc++.h>
using namespace std;

int main()
{
    string tim="03:34:49";
    int seconds=stoi(tim.substr(0,2))*3600+stoi(tim.substr(3,2))*60+stoi(tim.substr(6,2));
    cout<<seconds<<endl;
    return 0;
}