#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x=1,p;
    int people=0;
    float numerator=365;
    float denominator=365;
    cin>>p;
    if(p==1)
    {
        cout<<"366"<<endl;
        return 0;
    }
    else if(p>1)
    {
        cout<<"🤣️percentage in 0 to 1 only"<<endl;
        return 0;
    }
    while (x>1-p)
    {
        x*=numerator/denominator;
        numerator--;
        people++;
        cout<<people<<"---"<<x<<endl;
    }

    

    return 0;
    
}