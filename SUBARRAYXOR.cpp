#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--){
        long long int x;
        cin >> x;

        long long int y=0;

        for (int i = 1; i < x; i++)
        {
            y^=i;
            cout<<i<<" ";
        }

        for(int i = x; i <= 1000000; i++){
            if(y^i){
                cout<<i<<" ";
                break;
            }
        }

        cout<<endl;
    }
    return 0;
}