#include<bits/stdc++.h>
using namespace std;

int main()
{   //x denotes the probability of two people having 
    //the same birthday
    float x = 1.0;

    float num=365;
    float den=365;
    int numOfPeople=0;
    float temp=100;
    float p;
    cin>>p;

    while(x<p){
        temp*=num/den;
        //here are we calculating the 
        //opposite of number of people
        //having same birthday
        x=100.0-temp;   
        //*****************
        num--;
        numOfPeople++;
    }

    cout<<"Number of people: "<<numOfPeople<<endl;
    return 0;
}