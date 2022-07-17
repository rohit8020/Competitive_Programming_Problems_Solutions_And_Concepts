#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int sub_seq(string input, string output[])
{
    if(input.empty()){
        output[0]="";
        return 1;
    }

    string small_str = input.substr(1);
    ll sub_prob = sub_seq(small_str,output);
    for ( ll i = 0; i < sub_prob; i++)
    {
        output[sub_prob+i]= input[0] + output[i];
    }
    
    return 2*sub_prob;
}

int main()
{
    string str;
    cin>>str;
    ll arr_size=pow(2,str.length());
    string* output_arr= new string[arr_size];
    sub_seq(str,output_arr);
    for (ll i = 0; i < arr_size; i++)
    {
        cout<<output_arr[i]<<endl;
    }
    
    return 0;
}