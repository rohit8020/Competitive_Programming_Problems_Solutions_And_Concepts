#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m.insert(make_pair(1, "Rohit"));
    m.insert(make_pair(2, "Rahul"));
    m.insert(make_pair(1, "Rohan"));
    m.insert(make_pair(1, "Sohan"));
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << it->second << endl; //here it is the poiter
    }
    //==================
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl; //here it is not pointer ,it is the first element of the m
    }
    return 0;
}