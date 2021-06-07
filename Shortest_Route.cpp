#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        ll temp,arrM[1000000];
        map<int,int,greater<int>> m1;
        map<int,int> m2; 
        cin>>n>>m;
        for (ll i = 0; i < n; i++)
        {
            cin>>temp;
            if(temp==1)m1.insert(make_pair(i,1));
            if(temp==2)m2.insert(make_pair(i,2));
        }
        for (ll i = 0; i < m; i++)
        {
            cin>>arrM[i];
        }
        for (ll i = 0; i < m; i++)
        {
            auto im1=m1.begin();
            for (; im1!=m1.end() ; im1++)
            {
                if(((arrM[i]-1)-(im1->first))>=0)
                break;
            }

            auto im2=m2.begin();
            for (; im2!=m2.end() ; im2++)
            {
                if(((im2->first)-(arrM[i]-1))>=0)
                break;
            }
            if(im1 == m1.end() && im2==m2.end())
            cout<<-1<<" ";
            else if(im1 == m1.end() && im2!=m2.end())
            cout<<((arrM[i]-1)-im2->first)<<" ";
            else if(im1 != m1.end() && im2==m2.end())
            cout<<((arrM[i]-1)-im1->first)<<" ";
            else
            cout<<(min(((im2->first)-(arrM[i]-1)),((arrM[i]-1)-im1->first)))<<" ";
        }
        cout<<endl;
    }
    return 0;
}