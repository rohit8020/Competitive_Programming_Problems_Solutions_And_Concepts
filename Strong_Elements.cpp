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

int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

void rohit8020(){
    //code here
    ll n;
    in n;

    vi v;
    v.resize(n);

    fr(i,0,n,1){
        in v[i];
    }

    vi s;
    s.resize(n);

    vi p;
    p.resize(n);

    fr(i,0,n,1){
        p[i]=0;
    }

    fr(i,0,n,1){
        s[i]=0;
    }

    p[0]=v[0];
    s[n-1]=v[n-1];

    fr(i,1,n,1){
        p[i]=gcd(p[i-1],v[i]);
    }

    rfr(i,n-2,0,1){
        s[i]=gcd(s[i+1],v[i]);
    }
    
    ll a=0;

    if(s[1]!=1){
        a=a+1;
    }else{
        a=a+0;
    }

    fr(i,1,n-1,1){
        if(gcd(p[i-1],s[i+1])!=1){
            a+=1;
        }else{
            a+=0;
        }
    }

    if(p[n-2]!=1){
        a=a+1;
    }else{
        a=a+0;
    }

    pt a nl;
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