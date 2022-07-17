#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long length =1;
    long long maxlength=1;
    long long n;
    cin>>n;
    vector<long long> v;
    v.reserve(n);

    for (long long i = 0; i < n; i++)
    {
        long long temp;
        cin>>temp;
        v.push_back(temp);
    }

    for (long long i = 0; i < n-1; i++)
    {
        if(v[i]<v[i+1]){
            length++;
            if(length>maxlength){
                maxlength = length;
            }
        }else{
            length = 1;
        }

        
    }
    
    cout<<maxlength<<endl;
    
    return 0;
}