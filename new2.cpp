#include <bits/stdc++.h>
using namespace std;

int minSteps(vector<int> a, int n)
{
    vector<int> prefix_sum(n);
    prefix_sum[0] = a[0];

    for (int i = 1; i < n; i++)
        prefix_sum[i] += prefix_sum[i - 1] + a[i];

    int mx = -1;

    for (int subgroupsum : prefix_sum)
    {

        int sum = 0;
        int i = 0;
        int grp_count = 0;

        while (i < n)
        {
            sum += a[i];
            if (sum == subgroupsum)
            {

                grp_count += 1;
                sum = 0;
            }
            else if (sum > subgroupsum)
            {

                grp_count = -1;
                break;
            }
            i += 1;
        }

        if (grp_count > mx)
            mx = grp_count;
    }

    return mx;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << minSteps(A, n);

    return 0;
}
