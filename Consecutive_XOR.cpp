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

bool allzeros(string s){
    bool ans = true;

    for(auto c : s){
        if(c == '1')return false;
    }
    return ans;
}

bool is01_10(string s){
    bool ans = true;

    fr(i,1,s.size(),1){
        if(s[i]==s[i-1])return false;
    }

    return ans;
}

void rohit8020()
{
    string s1;
    string s2;

    in s1;
    in s2;

    ll ones=0;

    for(auto i:s1){
        if(i=='1')ones++;
    }
    
    if(s1.compare(s2)==0){
        pt "YES" nl;
        return;
    }else if(allzeros(s1)){
        pt "NO" nl;
        return;
    }else if(ones>=1){
        if(is01_10(s2)){
            pt "NO" nl;
        }else{
            pt "YES" nl;
        }
    }else{
        pt "YES" nl;
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