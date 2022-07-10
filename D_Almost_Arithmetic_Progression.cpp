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


void rohit8020(){
    
	
	for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
		    d=a[1]+j-a[0]-i;
		    s=abs(i);
	    	for(k=1;k<n;k++) {
	    		x=abs(a[k]-(a[0]+i+k*d));
	    		if(x>1) break;
		    	s+=x;
	    	}
	    	if(k==n) mn=min(mn,s);
	    }
    } 
        
	cout<<(mn<1e9?mn:-1);
}
    
    
}

int main()
{
    
        rohit8020();
    

 return 0;
}