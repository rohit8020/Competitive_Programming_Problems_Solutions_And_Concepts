#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arrX[201],arrY[201];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int tempX,tempY;
        cin>>tempX;
        cin>>tempY;
        arrX[i]=tempX;
        arrY[i]=tempY;
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        bool right=false,left=false,upper=false,lower=false;
        for (int j = 0; j < n; j++)
        {
                if(arrX[i]<arrX[j]&&arrY[i]==arrY[j])
                    right=true;
                if(arrX[i]>arrX[j]&&arrY[i]==arrY[j])
                    left=true;
                if(arrY[i]>arrY[j]&&arrX[i]==arrX[j])
                    lower=true;
                if(arrY[i]<arrY[j]&&arrX[i]==arrX[j])
                    upper=true;
                
        }
        if(left and right and lower and upper){
                    count++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}