#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,2,2,2,3,3,3,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    cout<<"length of the array: "<<len<<endl;

    //lowerbound
    auto it=lower_bound(arr,arr+len,3);
    cout<<"This is the lowerbound: "<<*(it)<<endl;
    cout<<"This is the element one step backward the lowerbound: "<<*(it)<<endl;
    cout<<"\n==================\n";
    //upperbound
    auto it2=upper_bound(arr,arr+len,3);
    cout<<"This is the upperbound: "<<*(it2)<<endl;
    cout<<"This is the element one step further the upperbound: "<<*(it2)<<endl;
    //no. elements present
    cout<<(it2-it)<<" elemnts are present"<<endl;
    
    return 0;
}