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
    char c;
    in c;
    string s;
    in s;
    s=s+s;
    if(c=='g'){
        pt 0 nl;
    }else{
        ll dp[2*n+1];
        for(int i=0;i<2*n+1;i++)
          dp[i]=1000000;
          if(s.back()=='g')
            dp[2*n-1]=0;
            n*=2;
          for(ll i=n-2;i>=0;i--){
            if(s[i]=='g')
            dp[i]=0;
            else
             dp[i]=dp[i+1]+1;
          }
          ll ans=0;
          for(int i=0;i<n/2;i++){
            if(s[i]==c)
                ans=max(ans,dp[i]);
          }
          cout<<ans<<endl;
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