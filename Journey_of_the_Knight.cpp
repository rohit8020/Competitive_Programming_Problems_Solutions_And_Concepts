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

void solve(ll x1, ll y1, ll x2, ll y2, vector<vector<bool>> &v,ll &ans)
{

    ll i[] = {-2, -2, 2, 2, 1, -1, 1, -1};
    ll j[] = {1, -1, 1, -1, -2, -2, 2, 2};

    queue<pii> q;
    
    q.push(make_pair(x1, y1));
    
    while (!q.empty())
    {
        ll siz=q.size();
        while (siz--)
        {
            pii temp = q.front();
            q.pop();
            for (int a = 0; a < 8; a++)
            {
                ll x = temp.first + i[a];
                ll y = temp.second + j[a];
                if (x >= 1 and y >= 1 and x <= 8 and y <= 8 and !v[x][y])
                {
                    v[x][y] = true;
                    if(x==x2 and y==y2)return;
                    q.push(make_pair(x, y));
                }
            }
        }
        ans++;
    }

    return;
}

void rohit8020()
{
    // code here
    ll x1, y1, x2, y2;
    in x1 >> y1 >> x2 >> y2;

    vector<vector<bool>> v(9, vector<bool>(9, false));
    ll ans = 1;
    solve(x1, y1, x2, y2, v,ans);
    (ans % 2 == 0) ? (pt "YES" nl) : (pt "NO" nl);

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