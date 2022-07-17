#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int> s;
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    int size=s.size();
    int sum=0;
    arr[0]=0;
    for (int i = 1; i <= size; i++)
    {
        sum+=i+arr[i-1];
        arr[i]=arr[i-1]+i;
        // 5cout<<sum<<"<=="<<endl;
    }
    cout<<sum<<endl;
    
    // cout<<s.size()<<endl;
    return 0;
}