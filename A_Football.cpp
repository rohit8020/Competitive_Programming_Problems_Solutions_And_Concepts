#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<string,int> m;
    priority_queue<pair<int,string>> pq;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin>>temp;
        m[temp]++;
    }
    for (int i = 0; m.size(); i++)
    {
        pq.push(make_pair(m.begin()->second,m.begin()->first));
        m.erase(m.begin());
    }
    cout<<pq.top().second<<endl;
    return 0;
}