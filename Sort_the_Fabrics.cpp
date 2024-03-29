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

bool my_compare(pair<string,pair<ll,ll>> a, pair<string,pair<ll,ll>> b)
{
    string A=a.first; 
    string B=b.first; 
    if (A==B)
        return a.second.second < b.second.second;

    else return A < B;
}

bool my_compare2(pair<string,pair<ll,ll>> a, pair<string,pair<ll,ll>> b) {
    if(a.second.first == b.second.first)return a.second.second < b.second.second;
    return a.second.first < b.second.first;
}


void rohit8020()
{
    // code here
    ll n;
    in n;
    vector<pair<string,pair<ll,ll>>> v;
    fr(i,0,n,1){
        string t1;
        in t1;
        ll t2,t3;
        in t2>>t3;
        v.pb({t1,{t2,t3}});
    }

    vector<pair<string,pair<ll,ll>>> v2;
    fr(i,0,n,1){
        v2.pb(v[i]);
    }
    sort(all(v),my_compare);
    sort(all(v2),my_compare2);

    ll count=0;
    fr(i,0,n,1){
        if(v2[i].second.second==v[i].second.second)count++;
    }

    pt count nl;

}

int main()
{
    ll testcases;
    cin >> testcases;
    ll cas=1;
    while (testcases--)
    {
        pt  "Case #"<< cas <<": ";
        rohit8020();
        cas++;
    }

    return 0;
}