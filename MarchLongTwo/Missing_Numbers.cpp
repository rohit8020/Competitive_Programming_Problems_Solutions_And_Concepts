#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<ll> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);

        sort(v.begin(),v.end());

        ll Sub1=v[1];
        ll Sub2=v[0];
        ll Sum1=v[2];
        ll Sum2=v[3];
        
        ll A1=(Sub1+Sum1)/2;
        ll B1=Sum1-A1;

        ll A2=(Sub1+Sum2)/2;
        ll B2=Sum2-A2;

        ll A3=(Sub2+Sum1)/2;
        ll B3=Sum1-A3;

        ll A4=(Sub2+Sum2)/2;
        ll B4=Sum2-A4;

        if((A1>0 and B1>0) or (A2>0 and B2>0) or (A3>0 and B3>0) or (A4>0 and B4>0)){
            if(A1/B1==v[0] and A1*B1==v[3]){
            cout<<A1<<" "<<B1<<endl;
            }else if(A2/B2==v[0] and A2*B2==v[2]){
                cout<<A2<<" "<<B2<<endl;
            }else if(A3/B3==v[1] and A3*B3==v[3]){
                cout<<A3<<" "<<B3<<endl;
            }else if(A4/B4==v[1] and A4*B4==v[2]){
                cout<<A4<<" "<<B4<<endl;
            }else{
                cout<<-1<<" "<<-1<<endl;
            }
        }

    }
    
    return 0;
}