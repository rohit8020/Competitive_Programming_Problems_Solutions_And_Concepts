#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	string name;
	set<pair<int,int>> s;
	s.insert(make_pair(1,2));
	auto num=*(s.begin());
	cout<<"==========="<<num.second<<endl;
	int *p=&i;
	cin>>i;
	cin>>name;
	(*p)++;
	cout<<i<<endl;
	cout<<name<<endl;

	return 0;
}
