#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=4;
    int b=11;

    cout<<(a&b)<<endl;  //and operator
    cout<<(a|b)<<endl;  //or operator
    cout<<(a^b)<<endl;  //xor operator
    cout<<(a^a)<<endl;  //same number xor will be zero
    cout<<(a^a^b)<<endl;  //the answer is b
    cout<<(~b)<<endl; //not will flip all the bits
    cout<<(a<<3)<<endl; //this means multiplying 3 times 2 with a this is left shift operator
    cout<<(a>>2)<<endl; //this means dividing 2 times 2 with a this is right shift operator
    return 0;
}