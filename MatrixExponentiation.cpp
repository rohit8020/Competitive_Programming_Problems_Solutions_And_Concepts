#include<iostream>
#include<bits/stdc++.h>
#define LOOP(i,n) for (int i=0;i<n;i++)
#define N 102
int A[N][N];
using namespace std;
void Identity(int I[][N],int n)
{


    LOOP(i,n) LOOP(j,n)
    {
        if(i==j)
            I[i][j]=1;
        else
            I[i][j]=0;
    }
}
void multiply(int A[][N],int B[][N],int n)
{
    int C[N][N];

    LOOP(i,n) LOOP(j,n) LOOP(k,n)   C[i][j] = A[i][k] * B[k][j];


     LOOP(i,n) LOOP(j,n) A[i][j] = C[i][j];

}
void exponent(int A[][N] , int n , int m)
{

    int res[N][N];
    Identity(res,n);
    LOOP(i,n)
    multiply(res,res,n)

      LOOP(i,n) LOOP(j,n) A[i][j] = res[i][j];
}
void printMatrix(int A[][N],int n)
{

     LOOP(i,n) cout << endl; LOOP(j,n)  cout << A[i][j] << " ";
}
int main()
{

    cout << "Enter dimension and power" <<  endl;
    int n,m;
    cin >> n >> m;
    cout << "Enter values of Matrix" << endl;
    LOOP(i,n); LOOP(j,n); cin >> A[i][j];

    exponent(A,n,m);
    printMatrix(A,n);
    return 0;
}
