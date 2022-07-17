#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4];

    //taking the input of the 2d-array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int temp;
            cin>>temp;
            arr[i][j]=temp;
        }  
    }

    //print the wave form of the 2d-array
    bool alternate=false;
    for (int i = 0; i < 4; i++)
    {
        if(alternate){
            for (int j = 3; j >=0 ; j--)
            {
                cout<<arr[j][i]<<" ";
            }
            alternate=false;
        }else{
            for (int j = 0; j < 4; j++)
            {
                cout<<arr[j][i]<<" ";
            }
            alternate=true;
        }
    }
    
    
    return 0;
}