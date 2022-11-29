#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll n, k;
    cin >> n >> k;

    ll a[n], i, ans = 0;
    priority_queue<ll> pq;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        pq.push(a[i]);
    }

    while (pq.size() >= k)
    {
        vector<ll> v;
        while (v.size() < k)
        {
            v.push_back(pq.top());
            pq.pop();
        }

        if (v.size() == k)
            ans += v.back();

        for (i = 0; i < k; i++)
            if (v[i] > v.back())
                pq.push(v[i] - v.back());

        v.clear();
    }

    cout << ans << endl;
    return 0;
}