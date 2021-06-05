#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,2,2,2,3,3,3,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    cout<<"length of the array: "<<len<<endl;

    //find function 
    auto it3=find(arr,arr+len,3);
    cout<<"the first occurence of 3:  "<<*(it3)<<endl;
    cout<<"This is the element just backward the 3: "<<*(--it3)<<endl;

    //binary search element
    bool present=binary_search(arr,arr+len,3);
    cout<<present<<endl;
}