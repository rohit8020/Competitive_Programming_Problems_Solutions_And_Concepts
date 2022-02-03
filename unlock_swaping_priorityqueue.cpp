#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int arr[100000];

    priority_queue<int> max;

    cin>>n>>k;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        max.push(arr[i]);
    }

    int index=0;
    while((k--) and (max.size())){
        auto it=find(arr,arr+n,max.top());
        int ind=it-arr;
        if(ind!=index){
            swap(arr[ind],arr[index]);
        }else{
            k++;
        }
        
        max.pop();
        index++;
    }

    cout<<endl;
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}