#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string sortbit(string s,bool asc){
    int zeros=0;
    int ones=0;
    
    for(auto i:s){
        if(i=='0'){
            zeros++;
        }else{
            ones++;
        }
    }

    string ans;
    if(asc){
        while (zeros--)
        {
            ans.push_back('0');
        }
        while (ones--)
        {
            ans.push_back('1');
        }
    }else{
        while (ones--)
        {
            ans.push_back('1');
        }
        while (zeros--)
        {
            ans.push_back('0');
        }
    }

    return ans;
}

string merge(string s1,string s2){
    int i=0;
    string ans;
    int siz1=s1.size();
    int siz2=s2.size();
    while(i<siz1 and i<siz2){
        ans.push_back(s1[i]);
        ans.push_back(s2[i]);
        i++;
    }

    if(i!=siz1){
        ans.push_back(s1[i]);
    }
    return ans;
}

int count01(string s){
    int siz=s.size();
    int count=0;
    for(int i=0;i<siz;){
        if(s[i]=='0' and s[i+1]=='1'){
            i+=2;
            count++;
        }else{
            i++;
        }
    }

    return count;
}

bool comp(int a, int b)
{
    return (a < b);
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        string s;
        ll l;
        cin>>l;
        cin>>s;

        if(l==1){
            cout<<0<<endl;
            continue;
        }
        
        string even;
        string odd;

        for(int i=0;i<l;i+=2){
            even.push_back(s[i]);
        }

        for(int i=1;i<l;i+=2){
            odd.push_back(s[i]);
        }
        
        int a1=count01(merge(sortbit(even,true),sortbit(odd,true)));
        int a2=count01(merge(sortbit(even,false),sortbit(odd,true)));
        int a3=count01(merge(sortbit(even,false),sortbit(odd,false)));
        int a4=count01(merge(sortbit(even,true),sortbit(odd,false)));

        cout<<max({a1,a2,a3,a4},comp)<<endl;
    }
    return 0;
}