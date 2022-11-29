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
    vector<pair<ll,pii>> v;
    fr(i,0,n,1){
        ll m;
        in m;
        
        vi vt;
        vt.resize(m);
        fr(j,0,m,1){
            in vt[j];
        }
        int sum=accumulate(all(vt),0);
        fr(j,0,m,1){
            v.push_back(make_pair(sum-vt[j],make_pair(i,j)));
        }
    }

    stable_sort(all(v));

    fr(i,0,v.size(),1){
        //answer is "YES" if and only if there exist two adjacent elements with equal sums and different sequences
        if(v[i].first==v[i+1].first and (v[i].second.first!=v[i+1].second.first)){
            pt "YES" nl;
            pt v[i + 1].second.first + 1 sp v[i + 1].second.second + 1 nl;
			pt v[i].second.first + 1 sp v[i].second.second + 1 nl;
            return;
        }
    }
    pt "NO" nl;
}

int main()
{
    // ll testcases;
    // cin >> testcases;
    // while (testcases--)
    // {
        rohit8020();
    // }

    return 0;
}