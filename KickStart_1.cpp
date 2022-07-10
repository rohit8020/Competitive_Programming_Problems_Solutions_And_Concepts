#include<bits/stdc++.h>
using namespace std;

typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int  ull;

#define memst(a, b) memset(a, (b), sizeof(a))
#define fr(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define rfr(i, j, k, in) for (ll i=j ; i>=k ; i-=in)
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
#define nl <<"\n"
#define pt cout<<
#define sp <<" "<<
#define in cin>>
#define rt return
#define mx INT_MAX
#define mn INT_MIN

typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<ll,ll> mpii;
typedef set<ll> seti;
typedef multiset<ll> mseti;

bool isValid(string oldPass){
    ll len=oldPass.length();
    bool u,l,s,n;
    u=false;
    l=false;
    s=false;
    n=false;
    for(auto i:oldPass){
        if(i>='A' and i<='Z')u=true;
        if(i>='a' and i<='z')l=true;
        if(i>='0' and i<='9')n=true;
        if(i=='#' or i=='&' or i=='*' or i=='@')s=true;
    }

    if(s and u and n and l and len>=7)return true;

    return false;
}

void rohit8020(){
    //code here
    ll n;
    in n;
    string oldpass;
    in oldpass;

    if(isValid(oldpass)){
        pt oldpass nl;
        return;
    }

    char sym[]={'#','@','*','&'};
    
    while(true){
    oldpass.push_back((char)(rand() % 26 + 65));
    oldpass.push_back((char)(rand() % 26 + 97));
    oldpass.push_back(sym[rand()%4]);
    oldpass.push_back((rand()%9)+'0');
    if(oldpass.length()<7)continue;
    else break;
    }
    pt oldpass nl;
}

int main()
{
    ll testcases;
    cin>>testcases;
    ll cas=1;
    while (testcases--)
    {
        pt "Case #"<< cas <<": ";
        rohit8020();
        cas++;
    }

 return 0;
}