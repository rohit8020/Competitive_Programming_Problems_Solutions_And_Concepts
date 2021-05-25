#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};
class PersonCompare
{
public:
    bool operator()(Person A, Person B)
    {
        // cout << A.age << " " << B.age << endl; //this is check the no of comparisons
        return A.age < B.age;
    }
};
int main()
{
    string name;
    int age, n;
    priority_queue<Person, vector<Person>, PersonCompare> pq, pq2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the age : ";
        cin >> age;
        Person p(name, age);
        pq.push(p);
    }
    pq2 = pq;
    while (n--)
    {
        cout << pq2.top().name << " " << pq2.top().age << endl;
        pq2.pop();
    }

    return 0;
}