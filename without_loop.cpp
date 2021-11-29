#include<bits/stdc++.h>
using namespace std;
void fun1(int);
void fun2(int);

void fun2(int i){
    if(i<10){
        cout<<i<<endl;
        fun1(i+1);
    }else{
        return;
    }
    
}

void fun1(int i){
    if(i<10){
        cout<<i<<endl;
        fun2(i+1);
    }else{
        return;
    }
    
}

int main()
{
    
    fun1(0);
    return 0;
}