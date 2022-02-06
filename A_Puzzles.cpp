#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[10000];
    priority_queue<int,vector<int>, greater<int>> min;
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr, arr +m);

    for (int i = 0; i < m-n+1; i++)
    {
        int diff=(arr[i+n-1]-arr[i]);
        min.push(diff);
    }
    
    cout<<min.top()<<endl;


    return 0;
}