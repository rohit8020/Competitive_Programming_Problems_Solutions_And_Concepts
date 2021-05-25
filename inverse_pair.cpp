#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<pair<int, int>> s;
    s.insert(make_pair(10, 1));
    s.insert(make_pair(30, 2));
    s.insert(make_pair(70, 3));
    s.insert(make_pair(40, 4));
    s.insert(make_pair(20, 5));
    s.insert(make_pair(69, 6));
    s.insert(make_pair(22, 7));
    s.insert(make_pair(80, 8));
    for (auto st : s)
    {
        cout << st.first << " " << st.second << endl;
    }

    return 0;
}