#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

bool isOdd(int num){
    return (num&1);
}

bool isEven(int num){
    return !(num&1);
}

//get the ith bit o based indexing of ith bit
int getBit(int num, int i){
    int mask = 1<<i;
    return ((mask&num)>0);
}

//set the ith bit o based indexing of ith bit
int setBit(int num, int i){
    int mask = 1<<i;
    return (mask|num);
}


//clear a particular bit on the basis of ith bit index
int clearBit(int num,int i){
    int mask = 1<<i;
    mask=(~mask);
    return (mask&num);
}

//update bit
int updateBit(int num, int i,int v){
    if(v){
        return setBit(num,i);
    }else{
        return clearBit(num,i);
    }
}

//clear last i bits
int cleaILastBit(int num, int i){
    int mask = ~(0);
     mask = mask<<(i); //
    return (num&mask);
}

//clear range from ith to jth point
int clearIToJBit(int num,int i,int j) {
    int mask1=(~0); //111111111
    mask1=mask1<<i; //111111100
    mask1=(~mask1); //000000011

    int mask2=(~0); //111111111
    mask2=mask2<<(j+1); //111100000
    
    int finalMask=mask1|mask2; //111100011

    return (num&finalMask);
}

//count the number of set bit
pair<int,int> countBit(int num) {

    int count1 = 0;
    int count0 = 0;

    while (num)
    {
        if(num&1){
            count1++; //if the last bit is 1 then increment count1
        }else{
            count0++; //if the last bit is 0 then increment count0
        }
        num=num>>1; //right shift
    }
    
    return make_pair(count0,count1);
}


//count set bit faster 
int countSetBitFast(int num){
    int count=0;
    while (num)
    {
        num=num&(num-1); //1100&1011=1000 1000&0111=0 these are the two iteration
        count++;
    }
    return count;
}

int main()
{
    int a=44;
    int b=35;
    char str[64];

    //the stl function to convert bumber to any base like 10, 16, 2
    cout<<stoi("10000", 0, 2)<<endl;    //2 means base two and o means starting index is 0 of the string character

    //the stl function to convert number to binary or any base
    
    cout<<atoi("12344")<<endl;
    // cout<<((a&1)?"odd":"even")<<endl;   //if the last bit is set then it is odd
    // cout<<((b&1)?"odd":"even")<<endl;   //otherwise it is even

    cout<<isEven(a)<<endl; //
    cout<<isOdd(b)<<endl; //

    cout<<getBit(5,0)<<endl; //
    cout<<setBit(5,1)<<endl; //this should be 7
    cout<<clearBit(5,0)<<endl; //this should be 4
    cout<<updateBit(5,3,1)<<endl; //this should be 13
    cout<<cleaILastBit(7,2)<<endl; //this should be 4
    cout<<clearIToJBit(15,1,2)<<endl; //this should be 4
    cout<<"number of 0 bits "<<countBit(13).first<<endl; 
    cout<<"number of 1 bits "<<countBit(13).second<<endl; 
    cout<<countSetBitFast(13)<<endl; //
    cout<<__builtin_popcount(13)<<endl; //this is the stl function to count the number of set bits

    return 0;
}