#include<iostream>
using namespace std;

int main()
{
	int i;
	i=10;
	int *p=&i;
	cout<<sizeof(&i)<<endl;
	return 0;
}
