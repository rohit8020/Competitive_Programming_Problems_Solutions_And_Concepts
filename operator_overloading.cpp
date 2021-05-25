#include <bits/stdc++.h>
using namespace std;

struct test8
{
    int x, y;
    test8(int a, int b)
        : x(a), y(b) {}
    test8 Add(const test8 &other)
    {
        // return *this + other; //this is weird
        return operator+(other); //this is weird too
    }
    test8 operator+(const test8 &other)
    {
        return test8(x + other.x, y + other.y);
    }
    test8 Multiply(const test8 &other)
    {
        return test8(x * other.x, y * other.y);
    }
    test8 operator*(const test8 &other)
    {
        return Multiply(other);
    }
    friend ostream &operator<<(ostream &stream, const test8 &other)
    {
        stream << other.x << " " << other.y;
        return stream;
    }
    // You are overloading << operator as a member function, therefore, the first parameter is implicitly the calling object.

    // You should either overload it as friend function or as a free function. For example:

    // overloading as friend function.

    // friend ostream& operator<<(ostream& out, int x){
    //     out << names[x] << " " << ages[x] <<endl;
    //     return out;
    // }
};

int main()
{
    test8 t1(10, 20);
    test8 t2(20, 10);
    test8 t3 = t1 + t2;
    // cout << t3.x << " " << t3.y << endl;
    cout << t3 << endl;
    test8 t4 = t1 * (t2);
    cout << t4.x << " " << t4.y << endl;
    return 0;
}