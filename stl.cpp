#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    return a.length() < b.length();
}


int main()
{
    // int arr[]={1,2,4,4,4,5,6,7};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // auto it=lower_bound(arr,arr+n,3);
    // cout<<it-arr<<endl;
    // it=upper_bound(arr,arr+n,5);
    // cout<<it-arr<<endl;

    // bool present=binary_search(arr,arr+n,9);
    // cout<<present<<endl;

    // string str[]={"adsf", "bd", "cdsfdsf", "dffhs"};
    // sort(str,str+4,compare);

    // for(int i=0;i<4;i++){
    //     cout<<str[i]<<endl;
    // }

    // char teststr[]="this is a test string";

    // char *ptr=strtok(teststr," ");

    // cout<<ptr<<endl;

    // while(ptr!= NULL){
    //     ptr=strtok(NULL," ");
    //     cout<<ptr<<endl;
    // }

    // list<string> l1({"rohit", "rahul", "ram", "seeta"});
    // l1.push_back("reena");
    // l1.push_back("reena");
    // l1.push_back("reena");
    // l1.push_back("reena");
    // l1.pop_back();
    // l1.pop_front();
    // l1.remove("reena"); //this removes all the occurrences of reena
    // l1.push_front("ranu");
    // for(auto i:l1){
    //     cout<<i<<endl;
    // }

    string str="12345";

    for(auto i:str){
        cout<<(i-'0')+1<<endl;
    }

    for(auto i:str){
        cout<<to_string((i-'0')+1)+"<-this is string"<<endl;
    }
    // atoi("42") is 42
    // atoi("3.14159") is 3
    // atoi("31337 geek") is 31337 
 
    return 0;
}