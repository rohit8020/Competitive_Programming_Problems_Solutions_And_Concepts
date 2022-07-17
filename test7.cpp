#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout << "v.size() : " << v.size() << endl;
    cout << "v.max_size() : " << v.max_size() << endl;
    cout << "v.capacity() : " << v.capacity() << endl;
    cout << ceil(log10(v.max_size())) << endl;

    return 0;
}