#include<bits/stdc++.h>
using namespace std;

string extractStringAtKey(string str, int key){
    //strtok
    //type casting to the char type address
    char *s=strtok((char *)str.c_str(), " ");

    while (key>1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
}

int convertToInt(string str){
    int num=0;
    int p=1;
    for (int i = str.length()-1; i>=0; i--)
    {
        num = num + ((str[i]-'0')*p);
        p=p*10;
    }
    
    return num;
}

bool lexicoCompare(pair<string, string> s1, pair<string, string> s2){
    return s1.second < s2.second;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2){
    int k1=convertToInt(s1.second);
    int k2=convertToInt(s2.second);

    return k1<k2;
}

int main()
{
    int n;
    cin>>n;
    cin.get();

    string a[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }

    int key;
    string reversal, ordering;
    cin>>key>>reversal>>ordering;

    pair<string, string> strPair[100];

    for (int i = 0; i < n; i++)
    {
        strPair[i].first=a[i];
        strPair[i].second=extractStringAtKey(a[i],key);
    }

    //next we will sort the string arr acc. to the numeric and lexico. 

    if(ordering == "numeric"){
        sort(strPair, strPair+n, numericCompare);
    }else{
        sort(strPair, strPair+n, lexicoCompare);
    }
    
    if(reversal=="true"){
        for (int i = 0; i < n/2; i++)
        {
            swap(strPair[i],strPair[n-1-i]);
        } 
    }

    for (int i = 0; i < n; i++)
    {
        cout<<strPair[i].first<<endl;
    }
    
    return 0;
}