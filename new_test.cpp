#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;

        }
        if(mp.size()<3){
            cout<<-1<<endl;
        }else{
            set<int> st;
            for(auto x:v){
                st.insert(x);
                
            }
            vector<int> temp;
                for(auto x:st){
                    temp.push_back(x);
                }
                int ans=INT_MAX;
                for(int i=0;i<temp.size()-2;i++){
                    int sum=temp[i+2]-temp[i];
                    ans=min(ans,sum);
                }

                cout<<ans<<endl;

        }
    }
    return 0;
}