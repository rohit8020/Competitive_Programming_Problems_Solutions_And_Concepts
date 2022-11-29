/*
#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for (int i = a; a < n ? i <= n : i >= n; a < n ? ++i : --i)
#define rep(i, s, e) for (int i = s; i <= e; i++)
#define repr(i, e, s) for (int i = e; i >= s; i--)
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl;
#define deb3(x) cout << "\nworking...upto-" << x << "\n";
#define ff first
#define ss second
#define pb(x) push_back(x)
#define ppb() pop_back()
#define pf(x) push_front(x)
#define ppf() pop_front()
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
// data types
typedef long int li;
typedef long long int ll;

class Solution
{
public:
    set<int> ans;
    vector<int> ans2;
    Solution()
    {
        ans.insert(1);
        for (int i = 1; i <= 1650; i++)
        {
            ans.insert(2 * i);
        }
        for (int i = 1; i <= 1650; i++)
        {
            ans.insert(3 * i);
        }
        for (int i = 1; i <= 1650; i++)
        {
            ans.insert(5 * i);
        }
        vector<int> x(ans.begin(), ans.end());
        ans2 = x;
    }

    int andrew(int n)
    {

        return *(ans2.begin() + n - 1);
    }

};

void solve()
{
    int n;
    cin >> n;
    Solution obj = Solution();
    cout << obj.andrew(n);
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //  freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);
  
    int t;
    cin >> t;
    int x = 1;
    while (x <= t)
    {
        //   cout<<"Case #"<<x<<": ";
        solve();
        x++;
    }

    return 0;
}
*/

