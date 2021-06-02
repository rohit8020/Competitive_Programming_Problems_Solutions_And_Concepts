#include<bits/stdc++.h>
using namespace std;

int main()
{
    //there will be some modification
    int arr[]={5,267,334,34,5423,46};
    int largest=arr[0], SecondLargest;
    for(int i=1;i<6;i++)
    {
        if(arr[i]>largest)
        {
            SecondLargest=largest;
            largest=arr[i];
        }
    }
    cout<<"largest->"<<largest<<"  "<<"secondlargest->"<<SecondLargest;
    return 0;
}