#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        vector<long long> v;
        
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        long long num=n;
        for(int i=1;i<=n;){
            v.push_back(num);
            i++;
            if(i>n)break;
            v.push_back(num*2);
            i++;
            num--;
        }

        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}