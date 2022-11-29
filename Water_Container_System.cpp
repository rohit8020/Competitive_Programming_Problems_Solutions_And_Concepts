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

void levelOrder(vvi &gp, vector<unordered_set<ll>> &lev)
{
    queue<ll> q;
    q.push(1);
    q.push(-1);
    unordered_set<ll> st;
    st.insert(1);
    ll l = 1;
    lev[1].insert(1);
    while (!q.empty())
    {
        if (q.front() == -1)
        {
            q.pop();
            l += 1;
            if (q.empty())
                break;
            else
                q.push(-1);
        }
        else
        {
            ll node = q.front();
            q.pop();
            for (ll nbr : gp[node])
            {
                if (st.find(nbr) == st.end())
                {
                    st.insert(nbr);
                    lev[l + 1].insert(nbr);
                    q.push(nbr);
                }
            }
        }
    }
}

void rohit8020()
{
    ll n, q;
    in  n >> q;

    ll temp = n - 1;
    vector<vector<ll>> gp(n + 1);
    vector<unordered_set<ll>> level(n + 2);
    ll ans = 0;
    ll cur = 1;

    fr(i, 0, temp, 1)
    {
        ll a, b;
        in a >> b;
        gp[b].pb(a);
        gp[a].pb(b);
    }

    levelOrder(gp, level);

    vector<ll> w(n + 1);
    fr(i, 1, n + 1, 1)
    {
        if (level[i].size() > 0){
            ll s=level[i].size();
            w[i] = s;
        }else{
            w[i] = -1;
        }
    }

    
    auto w2 = w;
    while (q--)
    {
        ll node;
        in node;
        w[cur]-=1;
        if (w[cur] == 0)
            cur++;
        if (cur > n)
            break;
    }

    fr(i, 1, n + 1, 1)
    {
        if (w[i] == 0)
            ans =ans+ w2[i];
    }
    pt ans nl;
}


int main()
{
    ll testcases;
    cin >> testcases;
    ll cas = 1;
    while (testcases--)
    {
        pt "Case #" << cas << ": ";
        rohit8020();
        cas++;
    }

    return 0;
}