#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s1;
        long long int N,K,length=0,maxlength=0;
        cin>>N>>K;
        cin>>s1;
        if(N>=K){
            for(char i: s1)
            {
                if(i=='*')
                {
                    length++;
                    if(length>maxlength)
                    {
                        maxlength=length;
                    }
                }else{
                    length=0;
                }
            }
            if(maxlength>=K)
            {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }

    }
}