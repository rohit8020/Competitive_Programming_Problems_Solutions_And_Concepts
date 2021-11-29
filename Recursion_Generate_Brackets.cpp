#include<bits/stdc++.h>
using namespace std;

void generateBrackets(int n,string output){
    if(n==0){
        cout<<output<<endl;
        return;
    }
    
    // generateBrackets(n-1,"()"+output);
    generateBrackets(n-1,output+"()");
    generateBrackets(n-1,"("+output+")");

}

int main()
{
    int n;

    cin>>n;
    generateBrackets(n,"");
    return 0;
}