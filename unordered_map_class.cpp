#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string firstname, lastname;
    int rollno;

    Student(string f, string l, int a)
        : firstname(f), lastname(l), rollno(a) {}
    friend ostream &operator<<(ostream &stream, Student &other)
    {
        stream << other.firstname << " " << other.lastname << " " << other.rollno;
        return stream;
    }
    bool operator==(const Student &other) const
    {
        return rollno == other.rollno;
    }
};

class Hashfun
{
public:
    size_t operator()(const Student &other) const
    {
        return other.firstname.length() + other.lastname.length();
    }
};
int main()
{
    unordered_map<Student, int, Hashfun> st;
    Student s1("Roniks", "kumar", 229);
    Student s2("Rohit", "Gangwar", 24);
    Student s3("Rohit", "Gangwar", 25);
    Student s4("Ram", "God", 32);
    cout << s1 << endl;
    st[s1] = 12;
    st[s2] = 1;
    st[s3] = 20;
    st[s4] = 10;
    for (auto s : st)
    {
        Student s5 = s.first;

        cout << s5; //binding reference of type ‘Student&’ to ‘const Student’ discards qualifiers
        cout << s.second << endl;
        // s.first.firstname << " " << s.first.lastname << " " << s.first.rollno << " "
    }
    return 0;
}