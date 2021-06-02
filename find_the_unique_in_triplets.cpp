#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(64,0);
    int no,n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>no;
        int j=0;
        while (no>0)
        {
            int last_bit = (no&1);
            v[j]+=last_bit;
            j++;
            no=no>>1;
        }
    }
    int unique_no=0;
    for (int i = 0; i < n; i++)
    {
        unique_no+=(v[i]%3)*pow(2,i);
    }
    cout<<unique_no<<endl;

    return 0;
}