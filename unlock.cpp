#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,key;
    cin>>n>>key;
    int v[1000000];
    map<int,int,greater<int>> ms;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        ms.insert(make_pair(v[i],i));
    }
    // for (auto it = ms.begin(); it != ms.end(); it++)
    // {
    //     cout<<"-----"<<it->first<<" "<<it->second<<endl; 
    // }
    int x=0;
    while(key)
    {
        auto address=ms.begin();
        if(v[address->second]>v[x])
        {
            // cout<<v[address->second]<<" "<<v[x]<<" "<<endl;
            int temp=v[x];
            swap(v[address->second],v[x]);
            auto it = ms.find(temp);
            // cout<<"======"<<it->first<<" "<<it->second<<endl;
            ms.erase(it);
            ms.insert(make_pair(temp,address->second));
            key--;
        }
        ms.erase(ms.begin());
        x++;
    }
    // for (auto it = ms.begin(); it != ms.end(); it++)
    // {
    //     cout<<"-----"<<it->first<<" "<<it->second<<endl; 
    // }
    
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}