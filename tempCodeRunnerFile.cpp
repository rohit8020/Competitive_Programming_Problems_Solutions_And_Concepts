#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll N;

ll mainFunction(vector<ll> f, vector<ll> p, ll initiator[], ll m)
{
    vector<bool> visited(f.size(), false);
    ll res = 0;

    for (ll i = 0; i < m; i++)
    {
        ll nod = initiator[i];
        ll mx = 0;
        while (visited[nod] == false)
        {
            mx = max(mx, f[nod]);
            visited[nod] = true;
            if (p[nod] == 0)
            {
                break;
            }

            nod = p[nod];
        }
        res += mx;
    }
    return res;
}

void initiators(vector<ll> &vector1, vector<ll> &vector2, ll &number, vector<ll> &initiator)
{
    vector<bool> visited(vector1.size(), false);
    for (ll i = 1; i <= number; i++)
    {
        if (vector2[i] != 0)
            visited[vector2[i]] = true;
    }

    for (ll i = 1; i <= number; i++)
    {
        if (visited[i] == false)
        {
            initiator.push_back(i);
        }
    }
}

void takeInput1(vector<ll> &vector1, ll &number)
{
    for (ll i = 1; i <= number; i++)
    {
        cin >> vector1[i];
    }
}

void takeInput2(vector<ll> &vector2, ll &number)
{
    for (ll i = 1; i <= number; i++)
    {
        cin >> vector2[i];
    }
}

int main()
{
    ll testCases;
    cin >> testCases;
    ll cas = 1;
    while (cas <= testCases)
    {
        cout << "Case #" << cas << ": ";
        ll number;
        cin >> number;
        N = number;

        vector<ll> vector1(number + 1);
        vector<ll> vector2(number + 1);

        takeInput1(vector1, number);
        takeInput2(vector2, number);

        vector<ll> initiator;
        initiators(vector1, vector2, number, initiator);

        sort(initiator.begin(), initiator.end());

        ll a[initiator.size()];
        ll m = initiator.size();
        for (ll i = 0; i <= initiator.size() - 1; i++)
        {
            a[i] = initiator[i];
        }

        ll res = 0;
        res = mainFunction(vector1, vector2, a, m);
        while (next_permutation(a, a + m))
        {
            ll temp = mainFunction(vector1, vector2, a, m);
            res = max(res, temp);
        }
        cout << res << "\n";

        cas++;
    }

    return 0;
}