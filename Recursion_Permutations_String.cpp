#include<bits/stdc++.h>
using namespace std;

void permStrings(char inp[], int i, set<string> &s){
    //base case
    if(inp[i]=='\0'){
        string t(inp);
        s.insert(t);
        return;
    }

    // j=i 
    for (int j = i; inp[j]!='\0'; j++)
    {
        swap(inp[i],inp[j]);
        permStrings(inp,i+1,s);

        //backtracking step 
        swap(inp[i],inp[j]);
    }
    return; 
    
}

int main()
{
    char inp[1000];
    cin>>inp;
    set<string> s;
    permStrings(inp,0,s);

    for(auto str: s){
        cout<<str<<endl;
    }
    return 0;
}