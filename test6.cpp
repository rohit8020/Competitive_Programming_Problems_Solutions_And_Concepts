#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;

    vector<char> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    char ch;
    cin>>ch;

    vector<int> v2;

    for(int i=0;i< n; i++){
        if(ch==v[i]){
            v2.push_back(i);
        }
    }
int len=v2.size();
if(len&1==0){

int a=v2[len/2];
int b=v2[(len/2)+1];
int sum1=0,sum2=0;

for(auto x=0;x<v2.size();x++){
        sum1+=(abs(v2[x]-a)-1-(abs((len/2)-x)-1));
        sum2+=(abs(v2[x]-b)-1-(abs(((len/2)+1)-x)-1));
    }

cout<<min(sum1,sum2)<<endl;
}else{
    int a=v2[len/2];
    int sum=0;
  
    for(auto x=0;x<v2.size();x++){
        sum+=(abs(v2[x]-a)-1-(abs((len/2)-x)-1));
    }

    cout<<sum<<endl;
}
   

    cout<<endl;



    return 0;
}

/*
string s = "rohit";
    string s1(s, 1, 3);
    cout << s << endl
         << s1 << endl;
    cout<<min(3,4)<<endl;
*/