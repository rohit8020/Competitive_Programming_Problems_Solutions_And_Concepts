#include<bits/stdc++.h>
using namespace std;

int noWaysToPlaceTiles(int n){
    if(n<=3){
        return 1;
    }

    int x=noWaysToPlaceTiles(n-4);
    int y=noWaysToPlaceTiles(n-1);

    return x+y;
}

int main()
{
    int n;
    cin>>n;
    cout<<"No. of ways to place the tiles : "<<noWaysToPlaceTiles(n);
    return 0;
}