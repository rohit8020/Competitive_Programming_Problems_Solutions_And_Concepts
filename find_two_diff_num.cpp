//in this question we have to find out the two diff number without the pair ,rest all number are in pair
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={5,1,2,1,2,3,5,7};
    int res=0;
    for (int i = 0; i < 8; i++)
    {
        res^=arr[i];
    }
    //now we find the number with the first set bit same as the res first bit
    int pos=0;
    int temp=res;
    while((temp&1)!=1)
    {
        pos++;
        temp=temp>>1;
    }
    int mask=1<<pos;
    int x=0;
    int y=0;
    for (int i = 0; i < 8; i++)
    {
        if((arr[i]&mask)>0)
        {
            x=x^arr[i];
        }
    }
    y=x^res;
    cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    return 0;
}