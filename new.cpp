#include <bits/stdc++.h>
using namespace std;
 
int numBoxes(vector<int> A, int K)
{
    int n=A.size();
    sort(A.begin(), A.end());
 
    int i = 0, j = n - 1;
    int ans = 0;
    while (i <= j) {
        ans++;
        if (A[i] + A[j] <= K)
            i++;
        j--;
    }
 
    return ans;
}
 
// Driver program
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout << numBoxes(A,k);
    return 0;
}