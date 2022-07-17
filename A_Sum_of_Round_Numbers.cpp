#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n--){
        string str;
        cin>>str;

        int ans = 0;
        int size = str.size();
        vector<string> v;

        for (int i = 0; i < str.size(); i++)
        {
            int temp=str[i]-'0';
            if(temp>0){
                ans++;
                int tmp=size-i;
                string strtmp(tmp,'0');
                string tmp2=to_string(temp);
                strtmp[0]=tmp2[0];
                v.push_back(strtmp);
            }
        }
        cout<<ans<<endl;
        for(int i=0;i<v.size();i++){
            if(i!=v.size()-1){
                cout<<v[i]<<" ";
            }else{
                cout<<v[i]<<endl;
            }
        }
    }
    
    return 0;
}