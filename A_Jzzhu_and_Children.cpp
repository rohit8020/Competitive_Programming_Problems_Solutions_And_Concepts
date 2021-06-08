#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>> student_q;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        student_q.push(make_pair(temp,i+1));
    }
    
    while (!student_q.empty())
    {
        if(n==1)
        {
            cout<<"1"<<endl;
            break;
        }
        if(student_q.front().first > m){ 
            student_q.push({student_q.front().first - m,student_q.front().second});
            student_q.pop();
        }
        else
        {
            student_q.pop();
        }

        if(student_q.size()==1)
        {
            cout<<student_q.front().second<<endl;
            break;
        }
    }
    
    return 0;
}