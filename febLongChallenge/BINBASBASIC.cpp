#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        int n,k;
        string binStr;

        cin>>n>>k;
        cin>>binStr;

        int i=0;
        int j=n-1;

        while (i<j)
        {
            if((binStr[i]!=binStr[j])){
                k--;
            }
            i++;
            j--;
        }

        if(k==0){
            cout<<"YES"<<endl;
        }else if(k<0){
            cout<<"NO"<<endl;
        }else{
            if(n%2){
                cout<<"YES"<<endl;
            }else{
                if(k%2){
                    cout<<"NO"<<endl;
                }else{
                   cout<<"YES"<<endl;
                }
            }
        }
        
    }
    return 0;
}