#include<bits/stdc++.h>
using namespace std;

#define ll long long int

string func(char i)
{
    string chr;
    switch (i)
    {
    case '0' : {
        chr="+~`";
        break;
    }
    case '1' : {
        chr=".!";
        break;
    }
    case '2': {
        chr="abc";
        break;
    }
    case '3': {
        chr="def";
        break;
    }
    case '4': {
        chr="ghi";
        break;
    }
    case '5' : {
        chr="jkl";
        break;
    }
    case '6' : {
        chr="mno";
        break;
    }
    case '7' : {
        chr="pqrs";
        break;
    }
    case '8' : {
        chr = "tuv";
        break;
    }
    case '9' : {
        chr="wxyz";
        break;
    }
    default:
        break;
    }
    return chr;
}
int keypad_perm(string input, string output[])
{
    if(input.length()==1){
        string chr=func(input[0]);
        for (ll i = 0; i < chr.length(); i++)
        {
            output[i]=chr[i];
        }
        return chr.length();
    }

    string temp=func(input[0]);
    
    string small_str = input.substr(1);
    ll sub_prob = keypad_perm(small_str,output);
    string *temp_output=new string[sub_prob];
    for (ll i = 0; i < sub_prob; i++)
    {
        temp_output[i]=output[i];
    }
    
    for ( ll i = 0; i < temp.length(); i++)
    {
        for (ll j = 0; j < sub_prob; j++)
        {
            output[i*(sub_prob)+j]=temp[i]+temp_output[j];
        }
        
    }
    
    return temp.length()*sub_prob;
}

int main()
{
    string str;
    cin>>str;
    string* output_arr= new string[1000000];
    ll arr_size=keypad_perm(str,output_arr);
    for (ll i = 0; i < arr_size; i++)
    {
        cout<<output_arr[i]<<endl;
    }
    
    return 0;
}