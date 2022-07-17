#include <bits/stdc++.h>
using namespace std;
void add_sub_method(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void mul_div_method(int *a, int *b)
{
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}
void XOR_method(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int x = 10, y = 5;

    cout << "Before Swapping: x =" << x << ", y=" << y << endl;

    add_sub_method(&x, &y);
    cout << "After Swapping: x =" << x << ", y=" << y << endl;

    mul_div_method(&x, &y);
    cout << "After Swapping: x =" << x << ", y=" << y << endl;

    XOR_method(&x, &y);
    cout << "After Swapping: x =" << x << ", y=" << y << endl;

    return 0;
}
