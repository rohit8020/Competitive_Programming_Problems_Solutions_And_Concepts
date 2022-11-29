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

ll dis(ll x1, ll y1, ll x2, ll y2)
{
    return (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
}

void rohit8020()
{
    ll rh,rs;
    in rh >>rs;

    ll n;
    in n;
    vii v;
    fr(i,0,n,1){
        ll t1,t2;
        in t1 >> t2;
        v.pb({t1,t2});
    }

    ll m;
    in m;
    vii v3;
    fr(i,0,m,1){
        ll t1,t2;
        in t1 >> t2;
        v3.pb({t1,t2});
    }

    ll ans=0;

    vector<pair<ll,char>> v2;

    fr(i,0,n,1){
        ll temp=dis(0,0,v[i].first,v[i].second);
        if(((rs+rh)*(rs+rh))>=temp){
            v2.pb({temp,'r'});
        }
    }

    fr(i,0,m,1){
        ll temp=dis(0,0,v3[i].first,v3[i].second);
        if(((rs+rh)*(rs+rh))>=temp){
            v2.pb({temp,'y'});
        }
    }

    if(v2.size()==0){
        pt 0 sp 0 nl;
        return;
    }

    sort(all(v2));
    auto temp=v2[0];
    fr(i,0,v2.size(),1){
        if(temp.second!=v2[i].second)break;
        else ans++;
    }

    if(temp.second=='r'){
        pt ans sp 0 nl;
    }else{
        pt 0 sp ans nl;
    }

}

int main()
{
    ll testcases;
    cin >> testcases;
    ll cas=1;
    while (testcases--)
    {
        pt "Case #"<< cas <<": ";
        rohit8020();
        cas++;
    }

    return 0;
}