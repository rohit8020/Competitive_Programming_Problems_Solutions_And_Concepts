//https://www.geeksforgeeks.org/find-the-missing-number/
// This method uses the technique of XOR to solve the problem.

// Approach:
// XOR has certain properties
// Assume a1 ^ a2 ^ a3 ^ …^ an = a and a1 ^ a2 ^ a3 ^ …^ an-1 = b
// Then a ^ b = an

// Algorithm:
// Create two variables a = 0 and b = 0
// Run a loop from 1 to n with i as counter.
// For every index update a as a = a ^ i
// Now traverse the array from start to end.
// For every index update b as b = b ^ array[i]
// Print the missing number as a ^ b.

// Implementation:

#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int getMissingNo(int a[], int n)
{
    // For xor of all the elements in array
    int x1 = a[0];

    // For xor of all the elements from 1 to n+1
    int x2 = 1;

    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];

    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}

// Driver Code
int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout << miss << endl;
}