#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool checkChar(string temp, string str2){

    int t=0;
    for (int i = 0; i < temp.size(); i++){
        if(temp[i]==str2[t]){
            t++;
        }
    }

    if(t==str2.size()){
        return true;
    }else{
        return false;
    }
}

string solution(string str, string str2){
    vector<int> v1;
    vector<int> v2;

    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> min;

    for(int i = 0; i <str.size(); i++){
        if(str[i] == str2[0]){
            v1.push_back(i);
        }
        if(str[i] == str2[str2.size()-1]){
            v2.push_back(i);
        }
    }
    // printArr(v1);
    // printArr(v2);

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if(v1[i]<v2[j]){
                string temp = str.substr(v1[i],v2[j]-v1[i]+1);
                bool exist=checkChar(temp,str2);
                if(exist){
                    min.push(make_pair(temp.length(),temp));
                }
            }
        }
        
    }
    

    return min.top().second;
}

int main()
{   
    string str;
    string str2;

    getline(cin, str);
    getline(cin, str2);

    cout<<solution(str, str2)<<endl;
    
    // cout<<checkChar("rohit", "rht")<<endl;
    return 0;
}