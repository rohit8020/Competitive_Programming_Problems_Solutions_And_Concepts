#include <bits/stdc++.h>
using namespace std;

struct test8
{
    int x, y;
    test8(int a, int b)
        : x(a), y(b) {}
};

int main()
{
    test8 t1(10, 20);
    cout << t1.x << " " << t1.y << endl;
    return 0;
}