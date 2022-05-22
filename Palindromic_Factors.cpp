#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPalindrome(string num){
    string temp=num;
    reverse(num.begin(),num.end());
    return (temp==num);
}

void allFactors(vector<ll> &factros,ll num){
    ll i=1;
    while(i*i <= num) {
        if(num % i == 0) {
            factros.push_back(i);
            if(num/i != i) {
                factros.push_back(num/i);
            }
        }
        i++;
    }
}


int main()
{
    ll t;
    cin>>t;
    ll cas=1;
    while (t--)
    {
        ll num;
        cin>>num;
        vector<ll> factors;
        allFactors(factors,num);
        ll count=0;
        for(auto i:factors){
            if(isPalindrome(to_string(i))){
                count++;
            }
        }
        cout<<"Case #"<<cas<<": "<<count<<endl;
        cas++;
    }
    
    return 0;
}