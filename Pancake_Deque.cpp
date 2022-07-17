// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll t;
//     cin>>t;
//     ll cas=1;
//     while (t--)
//     {
//         vector<int> v;
//         ll n;
//         cin>>n;
//         for(int i=0;i<n;i++){
//             ll temp;
//             cin>>temp;
//             v.push_back(temp);
//         }

//         ll i=0;
//         ll j=n-1;
//         if(v[0]>v[n-1]){
//             j=n-2;
//         }else{
//             i=1;
//         }
//         ll ans=0;
//         ans++;
//         while(i<=j){
//             if(v[i]<v[j]){
//                 i++;
//                 ans++;
//             }else{
//                 j--;
//                 ans++;
//             }
//         }
//         cout<<"Case #"<<cas<<": "<<ans<<endl;
//     }
    

//     return 0;

// }
#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
void takeInput(vector<ll> &v,ll siz){
    for(ll i=0;i<siz;i++) cin>>v[i] ;
}

bool comp(ll a,ll b){
    return a<b;
}

void solution()
{
    ll siz;
    cin>>siz ;
    vector<ll>vec(siz) ;
    takeInput(vec,siz);
    ll minimum=0;
    ll start=0,end=siz-1;
    ll answer=0;
    while(start<=end){
        if(comp(vec[start],vec[end])){
            if(minimum<=vec[start]){
                answer++;
                minimum=vec[start];
            }
            start++;
        }
        else{
            if(minimum<=vec[end]){
                answer++;
                minimum=vec[end];
            }
            end--;
        }
        
    }
    cout<<answer<<endl ;
    
}

int main()
{
    ll testcases;
    cin>>testcases;
    ll casnumber=1;
    while(testcases--)
    {
        cout<<"Case #"<< casnumber <<": ";
        solution();
        ++casnumber ;
    }
    return 0 ;
}