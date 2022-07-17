#include<bits/stdc++.h>
using namespace std;

char* mystrtok(char *str, char delim)
{
    //this is statically created because it has to be created once in the function so that we can move forward in
    //the same array
    static char *input=NULL;

    if(str != NULL){
        //we are making the first call
        input=str;
    }
    //the base case and if the final token has been returned
    if(input==NULL){
        return NULL; 
    }

    //start extracting tokens and store them in a array
    char *output=new char[strlen(input)+1];
    int i=0;
    for (; input[i]!='\0'; i++)
    {
        if(input[i]!=delim){
            output[i]=input[i];
        }else{
            output[i]='\0';
            input=input+i+1;
            return output;
        }
    }
    //corner case that is at the end of the arr
    output[i]='\0';
    input=NULL;

    return output;
}

int main()
{
    char s[1000] = "My name is Rohit Gangwar";

    char *ptr=mystrtok(s,' ');
    cout<<ptr<<endl;

    while (ptr != NULL)
    {
        ptr=mystrtok(NULL,' ');
        cout<<ptr<<endl;
    }
    

    return 0;
}