#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int arr[]={1,2,3,4,5};
     int k;
     cin>>k;
     //nlog(n)
    //  priority_queue<int ,vector<int>, greater<int>> pq;
     
    //  for(auto i : arr)
    //  {
    //      pq.push(i);
    //  }

    //  for (int i = 1; i < k; i++)
    //  {
    //      pq.pop();
    //  }
    //  cout<<pq.top();
     priority_queue<int> pq;

     for(auto i : arr){

         pq.push(i);
         if(pq.size()>k){
             pq.pop();
         }
     }
     
     cout<<pq.top();
     return 0;
 }