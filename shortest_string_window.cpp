#include<bits/stdc++.h>
using namespace std;

typedef pair<int,string> pi;

int main(){
    string s1,s2,temp; 
    priority_queue<pi,vector<pi>,greater<pi>> pq;
    getline(cin,s1);
    getline(cin,s2);
    int len1=s2.length();
    int len2=s1.length();
    vector<int> v1,v2,v3,v4;
    v1.reserve(10000000);
    v2.reserve(10000000);
    v3.reserve(10000000);
    v4.reserve(10000000);
    for(int x=0,y=0;x<len2&&y<len2;x++,y++)
    {
        if(s1[x]==s2[0])
        {
            v1[x]=x;
        }
        if(s1[x]==s2[len1-1])
        {
            v2[y]=y;
        }
    }
    for (int i = 0; i < len2; i++)
    {
        if(v1[i]!=0)
        {
            v3.push_back(v1[i]);
        }
        if(v2[i]!=0)
        {
            v4.push_back(v2[i]);
        }
    }
    for (int i = 0; i < v3.size(); i++)
    {
        for (int j = 0; j < v4.size(); j++)
        {
            if(v3[i]<v4[j])
            {
                temp=s1.substr(v3[i],v4[j]-v3[i]+1);
                int z=0;
                for (int i = 0; i < temp.length(); i++)
                {
                    if(s2[z]==temp[i])
                    {
                        z++;
                    }
                }
                if(len1==z)
                {
                    pq.push(make_pair(v4[j]-v3[i]+1,temp));
                }
            }
        }
        
    }
    
    cout<<pq.top().second<<endl;
    return 0;
}
