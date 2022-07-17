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

    vector<vector<char>> v(n, vector<char>(n, 0));
    fr(i, 0, n, 1)
    {
        fr(j, 0, n, 1)
        {
            in v[i][j];
        }
    }

    ll ans = 0;
    pii A = {0, 0};
    pii B = {0, n - 1};
    pii C = {n - 1, n - 1};
    pii D = {n - 1, 0};
    while (n > 1)
    {

        ll one = 0, zero = 0;
        pii A1 = A;
        pii B1 = B;
        pii C1 = C;
        pii D1 = D;
        for (ll j = 0; j < n - 1; j++)
        {
            ll one = 0, zero = 0;
            if (v[A1.first][A1.second] == 1)
                one++;
            else
                zero++;

            if (v[B1.first][B1.second] == 1)
                one++;
            else
                zero++;
            if (v[C1.first][C1.second] == 1)
                one++;
            else
                zero++;
            if (v[D1.first][D1.second] == 1)
                one++;
            else
                zero++;

            A1.second++;
            B1.first++;
            C1.second--;
            D1.first--;

            ans += min(one, zero);
        }
        A.first++;
        A.second++;
        B.first++;
        B.second--;
        C.first--;
        C.second--;
        D.first--;
        D.second++;
        n -= 2;
    }
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