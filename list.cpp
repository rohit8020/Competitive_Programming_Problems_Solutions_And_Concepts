#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> l1{1,1,1,1,2,2,2,3,3,4,4};

    // l1.remove(2);
    // auto it = l1.begin();

    // l1.insert(7);
    for(; it != l1.end(); ++it)
        cout << '\n' << *it;
    return 0;
}