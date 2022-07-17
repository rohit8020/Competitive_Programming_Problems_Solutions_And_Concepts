#include<bits/stdc++.h>
using namespace std;

typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int  ull;

#define memst(a, b) memset(a, (b), sizeof(a))
#define fr(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define rfr(i, j, k, in) for (ll i=j ; i>=k ; i-=in)
#define rept(i, j) fr(i, 0, j, 1)
#define rrept(i, j) rfr(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define freach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define mp make_pair
#define pb push_back
#define inf (int)1e9
#define eps 1e-9
#define pi 3.1415926535897932384626433832795
#define mod 1000000007
#define nl <<"\n"
#define pt cout<<
#define sp <<" "<<
#define in cin>>
#define rt return
#define mx INT_MAX
#define mn INT_MIN

typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<ll,ll> mpii;
typedef set<ll> seti;
typedef multiset<ll> mseti;

// ll countm(ll num,ll num2){
//     ll r=0;
//     while(num>0 and num%num2==0){
//         num/=num2;
//         r++;
//     }

//     return r;
// }

void rohit8020(){
    //code here
    ll n,m;
    in n >> m;

    vi v,v2;
    v.resize(n);
    fr(i,0,n,1){
        in v[i];
    }
    ll k;
    in k;
    v2.resize(k);

    fr(i,0,k,1){
        in v2[i];
    }

    vii vp1,vp2;


    fr(i,0,n,1){
        if(v[i]%m==0 and v[i]/m>1){
            ll temp=v[i]/m;
            vp1.push_back(make_pair(m,temp));
        }else{
            vp1.push_back(make_pair(v[i],1));
        }
    }

    fr(i,0,k,1){
        if(v2[i]%m==0 and v2[i]/m>1){
            ll temp=v2[i]/m;
            vp2.push_back(make_pair(m,temp));
        }else{
            vp2.push_back(make_pair(v2[i],1));
        }
    }

    
    
        // for(auto i:mp1){
        //     if(mp2[i.first]!=i.second){
        //         pt "NO" nl;
        //         return;
        //     }
        // }
        for(auto i:vp1){
            pt i.first << " " << i.second<<",";
        }
        cout<<endl;
        for(auto i:vp2){
            pt i.first << " " << i.second<<",";
        }
        cout<<endl;
        // pt "YES" nl;

}

int main()
{
    ll testcases;
    cin>>testcases;
    while (testcases--)
    {
        rohit8020();
    }

 return 0;
}