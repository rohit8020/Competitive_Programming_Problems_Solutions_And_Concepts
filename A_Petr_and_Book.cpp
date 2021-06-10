#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arrDays[7];
    int day,pages,counter=0;
    cin>>pages;
    for (int i = 0; i < 7; i++)
    {
        cin>>arrDays[i];
    }
    int bucket;
    while(pages!=0)
    {
        if(pages<=arrDays[counter%7]){
            bucket=counter%7;
            break;
        }
        pages-=arrDays[counter%7];
        counter++;
    }
    cout<<bucket+1<<endl;
    return 0;
}