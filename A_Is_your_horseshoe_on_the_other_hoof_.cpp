#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int temp;
    while(cin>>temp)
    {
        s.insert(temp);
    }

    cout<<(4-s.size())<<endl;

    return 0;
}