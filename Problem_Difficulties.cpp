#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        set<int> s;
        s.insert(a);
        s.insert(b);
        s.insert(c);
        s.insert(d);
        if(s.size()==1){
            cout<<"0"<<endl;
        }else if(s.size()==4||s.size()==3 || ((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))){
            cout<<"2"<<endl;
        }else{
            cout<<"1"<<endl;
        }
    }
    
    return 0;
}