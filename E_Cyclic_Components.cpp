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

const int N = 200 * 1000 + 11;

int n, m;
int deg[N]={0};
bool visited[N]={false};
vector<int> comp;   //number of graphs
vector<int> g[N]; //graph

void dfs(int v) {
	visited[v] = true;
	comp.push_back(v);
	
	for (auto to : g[v])
		if (!visited[to])
			dfs(to);
}

void rohit8020(){
    //code here
    int n,e;
    in n >> e;

    fr(i,1,e+1,1){
        int x,y;
        in x >>y;
        g[x].pb(y);
        g[y].pb(x);
        deg[x]++;
        deg[y]++;
    }
    int ans=0;
    fr(i,1,n+1,1){
        if(!visited[i]){
            comp.clear(); //clear the previous graph
            dfs(i);

            bool hasCycle=true;
            for(auto e:comp) hasCycle&=(deg[e]==2);
            if(hasCycle){
                ans++;
            }
        }
    }
    
    pt ans nl;
    
}

int main()
{

        rohit8020();
    

 return 0;
}