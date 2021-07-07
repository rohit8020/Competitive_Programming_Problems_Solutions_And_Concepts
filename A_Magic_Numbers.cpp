#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    while (s.size())
    {
        if(s.back()=='1'){
            s.pop_back();
        }else if(s.back()=='4'){
            s.pop_back();
            if(s.size()==0){
                cout<<"NO"<<endl;
                return 0;
            }
            if(s.back()=='1'){
                s.pop_back();
            }else if(s.back()=='4'){
                s.pop_back();
                if(s.back()=='1'){
                    s.pop_back();
                }else{
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}