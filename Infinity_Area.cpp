#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define PI 3.1415926535897932384626433832795
double areaCircle(ll radius){
    return PI*radius*radius;
}

int main()
{
    ll t;
    cin>>t;
    ll cas=1;
    while (t--)
    {
        ll r,a,b;
        cin>>r>>a>>b;
        double area=0;
        bool f=true;
        ll radius=r;
        while(radius!=0){
            area+=areaCircle(radius);
            if(f){
                radius=radius*a;
                f=!f;
            }else{
                radius=radius/b;
                f=!f;
            }
        }
        cout<<"Case #"<<fixed << setprecision(6)<<cas<<": "<<area<<endl;
        cas++;
    }
    
    return 0;
}