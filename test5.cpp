// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 4
 
// Function to return the sum of the sub-matrix
int getSum(int r1, int r2, int c1, int c2,
           int dp[N + 1][N + 1])
{
    return dp[r2][c2] - dp[r2][c1] - dp[r1][c2]
           + dp[r1][c1];
}
 
// Function that returns true if it is possible
// to find the sub-matrix with required sum
bool sumFound(int K, int S, int grid[N][N])
{
 
    // 2-D array to store the sum of
    // all the sub-matrices
    int dp[N + 1][N + 1];
 
    // Filling of dp[][] array
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            dp[i + 1][j + 1] = dp[i + 1][j] + dp[i][j + 1]
                               - dp[i][j] + grid[i][j];
 
    // Checking for each possible sub-matrix of size k X k
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            int sum = getSum(i, i + K, j, j + K, dp);
 
            if (sum == S)
                return true;
        }
 
    // Sub-matrix with the given sum not found
    return false;
}
 
// Driver code
int main()
{
    int grid[N][N] = { { 1, 2, 3, 4 },
                       { 5, 6, 7, 8 },
                       { 9, 10, 11, 12 },
                       { 13, 14, 15, 16 } };
    int K = 2;
    int S = 14;
 
    // Function call
    if (sumFound(K, S, grid))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
// Modified by Kartik Verma