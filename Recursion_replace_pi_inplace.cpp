#include<bits/stdc++.h>
using namespace std;

void replacePi(char arr[],int i){
    if(arr[i]=='\0'||arr[i+1]=='\0'){
        return;
    }

    if(arr[i]=='p' and arr[i+1]=='i'){
        int j=i+2;

        while (arr[j]!='\0')
        {
            j++;
        }
        
        //shift the arr elements two step forward from i+2 position
        while (j>=i+2)
        {
            arr[j+2]=arr[j];
            j--;
        }

        arr[i]='3';
        arr[i+1]='.';
        arr[i+2]='1';
        arr[i+3]='4';

        replacePi(arr,i+4);
    }else{
        replacePi(arr,i+1);
    }
}

int main()
{
    char arr[10000];
    cin>>arr;
    
    replacePi(arr,0);
    cout<<arr<<endl;
 
    return 0;
}