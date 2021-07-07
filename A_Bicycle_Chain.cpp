#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    vector<int> v1,v2;
    unordered_map<int,int> M;
    priority_queue<pair<int,int>> pq;

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }

    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        v2.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(v2[j]%v1[i]==0){
                int temp=v2[j]/v1[i];
                M[temp]++;
            }
        }
        
    }
    for (int i = 0; M.size(); i++)
    {
        pq.push(make_pair(M.begin()->first,M.begin()->second));
        M.erase(M.begin());
    }
    cout<<pq.top().second<<endl;

    
    return 0;
}