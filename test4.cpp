#include<iostream>
using namespace std;

int main()
{
	int i;
	string name;
	int *p=&i;
	cin>>i;
	cin>>name;
	(*p)++;
	cout<<i<<endl;
	cout<<name<<endl;
	return 0;
}
