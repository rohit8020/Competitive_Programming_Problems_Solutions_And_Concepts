#include<bits/stdc++.h>
using namespace std ;

void takeInput(vector<int> &vec,int siz){
    for(int i=0;i<siz;i++) cin>>vec[i] ;
}

int sol2(int &index,int &siz,vector<int> &vec){
    int ans=0;
    while(index<siz)
    {
         int temp=0 ;
           int j=index;
           while(j<siz&&vec[j]!=0)
           {
               temp++ ;
               j++ ;
           }
           if(temp>0)
            {
               ans++ ;
            }
           index=j+1 ;
        
    }
    return ans;
}

void solve()
{
    int siz,dial_num ;
    int rohit_jdsfn=90;
    cin>>siz>>dial_num ;
    vector<int>vec(siz);
    takeInput(vec,siz);
    int index=0;
    int real_ans=sol2(index,siz,vec);
    cout<<real_ans<<endl ;
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0) ;
    int t, i=1 ;
    bool flag=true;
    cin>>t;
    while(t--)
    {
        cout<<"Case #"<< i <<": ";
        solve();
        ++i ;
    }
    return 0 ;
}