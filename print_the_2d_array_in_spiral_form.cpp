#include<bits/stdc++.h>
using namespace std;

void printRow(int arr[][4],int i,int j,int x){
    while (i<=j)
    {
        cout<<arr[x][i]<<" ";
        i++;
    }
}

void printRowReverse(int arr[][4],int i,int j,int x){
    while (i>=j)
    {
        cout<<arr[x][i]<<" ";
        i--;
    }
}

void printColumn(int arr[][4],int i,int j,int x){
    while (i<=j)
    {
        cout<<arr[i][x]<<" ";
        i++;
    }
}

void printColumnReverse(int arr[][4],int i,int j,int x){
    while (i>=j)
    {
        cout<<arr[i][x]<<" ";
        i--;
    }
    
}

int main()
{
    int arr[4][4];

    //taking the input of the 2d-array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int temp;
            cin>>temp;
            arr[i][j]=temp;
        }  
    }
    int i1=0,i2=3;
    int j1=0,j2=3;
    int i=0,j=3;
    //print the 2d-array in the spiral form
    while (i1<=i2&&j1<=j2)
    {
        printRow(arr,i1,i2,i);
        printColumn(arr,j1+1,j2,j);
        printRowReverse(arr,i2-1,i1,j);
        printColumnReverse(arr,j2-1,j1,i);
        i1++;
        i2--;
        j1++;
        j2--;
        i++;
        j++;
    }
    
    return 0;
}