#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    v.reserve(100000);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int totalMoney=0;
    int i=0;
    while (m--)
    {
        if(v[i]<=0){
        totalMoney+=abs(v[i]);
        i++;
        }else{
            break;
        }
    }
    cout<<totalMoney<<endl;
    return 0;
}