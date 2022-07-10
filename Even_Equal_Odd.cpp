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

ll count2(ll n){
    ll res=0;
    while(n>0 and n%2==0){
        n/=2;
        res++;
    }

    return res;
}

void rohit8020(){
    //code here
    ll n;
    in n;
    vi v;
    v.resize(2*n);
    fr(i,0,2*n,1){
    in v[i];
    }

    ll evens=0;
    ll odds=0;

    fr(i,0,2*n,1){
        if(v[i]%2==0){
            evens++;
        }else{
            odds++;
        }
    }

    if(evens==odds){
        pt 0 nl;
    }else if(odds>evens){
        pt (odds-evens)/2 nl;
    }else{
        // sort(all(v));
        vi v2;

        ll ans=0;
        fr(i,0,2*n,1){
            if(v[i]%2 == 0)
            v2.push_back(count2(v[i]));
        }

        sort(all(v2));

        fr(i,0,v2.size(),1){
            ans+=v2[i];
            odds++;
            evens--;
            if(odds ==evens)break;
        }

        pt ans nl;
    }
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