#include<bits/stdc++.h>
using namespace std;

typedef long long int ll; 

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll D,money=0, d, P, Q;
        cin>>D>>d>>P>>Q;
        ll temp=D/d;
        money=D*P+ Q*((d*(temp-1)*temp)/2+ (temp)*(D%d));
        cout<<money<<endl;
    }
    return 0;   
}

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long int ll; 

// int main()
// {
//     ll t;
//     cin>>t;
//     while (t--)
//     {
//         ll D,money=0, d, P, Q;
//         cin>>D>>d>>P>>Q;
//         ll temp=0;
//         ll temp2=0;
//         for (ll i = 0; i < D/d; i++)
//         {
//             money+=d*(P+temp);
//             temp+=Q;
//             temp2+=d;      
//         }
//         money+=(D-temp2)*(P+temp);
//         cout<<money<<endl;
//     }
//     return 0;   
// }