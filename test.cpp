#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    unordered_map<string,vector<string>> mp;
    for(auto str:strs){
        string temp=str;
        sort(temp.begin(),temp.end());
        mp[temp].push_back(str);
    }
    
    for(auto ele:mp){
        ans.push_back(ele.second);
    }
    
    return ans;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int temp=9;
    // while(true){
    //     cout<<temp;
    // }
    // // int A,B,C;
    // // cin>>A>>B>>C;
    // // if(A==B||B==C||C==A){
    // //     cout<<"YES"<<endl;
    // // }else{
    // //     cout<<"NO"<<endl;
    // // }

    vector<string> v({"eat","tea","tan","ate","nat","bat"});
    vector<vector<string>> ans=groupAnagrams(v);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;   
}