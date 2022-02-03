#include<bits/stdc++.h>
using namespace std;

int main()
{   
    long long int t;
    cin >> t;
    while (t--){
        long long int n,x;
        cin>>n>>x;
        
        bool extra=false;
        long long int count = 0;
        string str;
        cin>>str;
    
        for(auto c:str){
            if(c == '0'){
                count++;
            }else{
                if(!extra){
                    count++;
                    extra=true;
                }else{
                    count=0;
                    extra=false;
                }
            }
        }

    
        cout<<count<<endl;
        
    }
 
    return 0;
}