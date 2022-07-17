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

struct Node
{
    struct Node *chldrn[26];

    bool end;
};

struct Node *getNode(void)
{
    struct Node *node = new Node;

    node->end = false;

    for (int i = 0; i < 26; i++)
        node->chldrn[i] = NULL;

    return node;
}

void insert(struct Node *root, string key)
{
    struct Node *nod = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!nod->chldrn[index])
            nod->chldrn[index] = getNode();

        nod = nod->chldrn[index];
    }

    nod->end = true;
}

bool search(struct Node *root, string key)
{
    struct Node *nod = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!nod->chldrn[index])
            return false;

        nod = nod->chldrn[index];
    }

    return (nod->end);
}

void rohit8020()
{
    // code here
    ll n;
    in n;
    vs v;
    v.resize(n);
    fr(i, 0, n, 1)
    {
        in v[i];
    }

    struct Node *root = getNode();

    for (auto s : v)
        insert(root, s);

    for (auto s : v)
    {
        bool flag = true;
        fr(i, 0, s.size(), 1)
        {
            if (search(root, s.substr(0, i + 1)) and search(root, s.substr(i + 1, s.size() - i - 1)))
            {
                flag = false;
            }
        }
        if (flag)
        {
            pt 0;
        }
        else
        {
            pt 1;
        }
    }
    cout << "\n";
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