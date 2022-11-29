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
    string s;
    in s;
    if (n < 2){
        pt s nl;
        return;
    }
 
    ll maxLen = 1, start = 0;
    ll l, h;
    for (ll i = 0; i < n; i++) {
        l = i - 1;
        h = i + 1;
        while (h < n
               && s[h] == s[i]) 
            h++;
 
        while (l >= 0
               && s[l] == s[i]) 
            l--;
 
        while (l >= 0 && h < n
               && s[l] == s[h]) {
            l--;
            h++;
        }
 
        ll length = h - l - 1;
        if (maxLen < length) {
            maxLen = length;
            start = l + 1;
        }
    }
 
    pt  s.substr(start, maxLen) nl;
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