#include <bits/stdc++.h>
using namespace std;

typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int ull;

#define memst(a, b) memset(a, (b), sizeof(a))
#define fr(i, j, k, in) for (ll i = j; i < k; i += in)
#define rfr(i, j, k, in) for (ll i = j; i >= k; i -= in)
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
#define nl << "\n"
#define pt cout <<
#define sp << " " <<
#define in cin >>
#define rt return
#define mx INT_MAX
#define mn INT_MIN

typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<ll, ll> mpii;
typedef set<ll> seti;
typedef multiset<ll> mseti;

void rohit8020()
{
    // code here
    ll n;
    in n;
    vs v1,v2,v3;
    unordered_map<string,bool> m1,m2,m3;
    fr(i,0,n,1){
        string t;
        in t;
        m1[t]=true;
        v1.pb(t);
    }
    fr(i,0,n,1){
        string t;
        in t;
        m2[t]=true;
        v2.pb(t);
    }
    fr(i,0,n,1){
        string t;
        in t;
        m3[t]=true;
        v3.pb(t);
    }

    ll a1=0,a2=0,a3=0;
    fr(i,0,n,1){
        if(m2[v1[i]] and !m3[v1[i]]){
            a1++;
            a2++;
        }else if(m3[v1[i]] and !m2[v1[i]]){
            a1++;
            a3++;
        }else if(!m2[v1[i]] and !m3[v1[i]]){
            a1+=3;
        }
    }
    fr(i,0,n,1){
        if(m3[v2[i]] and !m1[v2[i]]){
            a2++;
            a3++;
        }else if(!m1[v2[i]] and !m3[v2[i]]){
            a2+=3;
        }
    }
    fr(i,0,n,1){
        if(!(m2[v3[i]] or m1[v3[i]])){
            a3+=3;
        }
    }

    pt a1 sp a2 sp a3 nl;


}

int main()
{
    ll testcases;
    cin >> testcases;
    while (testcases--)
    {
        rohit8020();
    }

    return 0;
}