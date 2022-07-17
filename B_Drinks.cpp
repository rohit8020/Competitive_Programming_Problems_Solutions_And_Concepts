#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    double numerator=0.00000000000,denominator=0.000000000000,temp;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        numerator+=temp;
        denominator++;
    }
    double temp2=numerator/denominator;
    cout<<fixed<<setprecision(12)<<temp2<<endl;
    return 0;
}