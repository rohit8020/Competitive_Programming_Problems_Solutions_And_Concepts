#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=23;
    unsigned int even_bits= num & 0xAAAAAAAA;
    unsigned int odd_bits = num & 0x55555555;
    
    even_bits>>=1;
    odd_bits <<=1;
    cout<<(even_bits | odd_bits)<<endl;
    return 0;
}