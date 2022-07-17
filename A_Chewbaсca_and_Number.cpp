#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int size=str.size();

    for(int i=0;i<str.length();i++){
        int temp=str[i]-'0';
    
        if((9-temp)<temp){
            string tmp;
            if(temp==9&&i==0){
                tmp=to_string(temp);
            }else{
                tmp=to_string(9-temp);
            }
            str[i]=tmp[0];
        }
    }

    cout << str << endl;
    return 0;
}